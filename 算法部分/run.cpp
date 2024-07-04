#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QProcess>
#include <QRegularExpression>
using namespace std;
bool updateParameterInPythonFile(const QString& pythonFilePath, const QString& parameterName, double parameterValue)
{
    QFile file(pythonFilePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug() << "Failed to open Python file:" << pythonFilePath;
        return false;
    }

    QTextStream stream(&file);
    QString content = stream.readAll();

    // 使用正则表达式替换参数值
    QRegularExpression regex(QString("%1\\s*=\\s*[0-9]+(?:\\.[0-9]+)?").arg(parameterName));
    content.replace(regex, QString("%1 = %2").arg(parameterName, QString::number(parameterValue)));

    // 将更新后的内容写回文件
    stream.seek(0);
    stream << content;
    file.close();

    return true;
}

double runPythonProgramAndGetAccuracy(const QString& pythonFilePath)
{
    QProcess process;
    process.start("python", QStringList() << pythonFilePath);
    if (!process.waitForFinished())
    {
        qDebug() << "Failed to run Python program:" << pythonFilePath;
        return -1.0;
    }

    // 解析 Python 程序输出,获取准确率
    QString output = QString::fromUtf8(process.readAllStandardOutput());
    QRegularExpression regex("Accuracy: ([0-9]+(?:\\.[0-9]+)?)");
    QRegularExpressionMatch match = regex.match(output);
    if (match.hasMatch())
    {
        return match.captured(1).toDouble();
    }
    else
    {
        qDebug() << "Failed to parse accuracy from Python program output.";
        return -1.0;
    }
}
double calculateAccuracy(const QString& pythonFilePath, const QString& parameterName, double parameterValue)
{
    // 1. 在 Python 文件中替换要调整的参数值
    if (!updateParameterInPythonFile(pythonFilePath, parameterName, parameterValue))
    {
        qDebug() << "Failed to update parameter in Python file.";
        return -1.0;
    }

    // 2. 运行 Python 程序并获取准确率
    double accuracy = runPythonProgramAndGetAccuracy(pythonFilePath);
    if (accuracy < 0.0)
    {
        qDebug() << "Failed to get accuracy from Python program.";
        return -1.0;
    }

    return accuracy;
}

