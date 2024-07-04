#include "parameter_practice.h"
#include "run.h"
#include <QDebug>
#include <QString>
#include <QFile>
#include <QRandomGenerator>
#include <cmath>
#include <QTextStream>
#include <QProcess>
#include <QRegularExpression>
#include <QVector>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
using namespace QtCharts;


bool read_parameter(QString pythonFile,int parameter_Index,QString& dataType, double& minimum, double& maximum){
    QFile file(pythonFile);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file:" << pythonFile;
        return false;
    }

    QTextStream in(&file);
    int lineNumber = 1;
    while (!in.atEnd()) {
        if (lineNumber == 3 * parameter_Index - 2) {
            dataType = in.readLine();
        } else if (lineNumber == 3 * parameter_Index - 1) {
            minimum = in.readLine().toDouble();
        } else if (lineNumber == 3 * parameter_Index) {
            maximum = in.readLine().toDouble();
            file.close();
            return true;
        }
        lineNumber++;
    }

    file.close();
    return false;
}
double calculateAccuracyForParameter(const QString& pythonFile, const QString& parameterName, double parameterValue)
{
    calculateAccuracy(pythonFile, parameterName, double parameterValue);
    return 0.0;
}

void showAccuracyPlot(const QVector<double>& parameterValues, const QVector<double>& accuracies, const QString& parameterName)
{
    QtCharts::QLineSeries* series = new QtCharts::QLineSeries();
    for (int i = 0; i < parameterValues.size(); ++i)
    {
        series->append(parameterValues[i], accuracies[i]);
    }

    QtCharts::QChart* chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle(QString("Accuracy Plot for Parameter: %1").arg(parameterName));
    chart->createDefaultAxes();

    QtCharts::QChartView* chartView = new QtCharts::QChartView(chart);
    chartView->show();
}
bool adjustParameter(int parameterIndex, const QString& parameterName, const QString& pythonFile, QString& dataType, double& minimum, double& maximum)
{
    if (dataType == "int")
    {
        QVector<double> accuracies;
        QVector<double> parameterValues;

        for (int i = static_cast<int>(minimum); i <= static_cast<int>(maximum); ++i)
        {
            double accuracy = calculateAccuracyForParameter(pythonFile, parameterName, static_cast<double>(i));
            accuracies.append(accuracy);
            parameterValues.append(static_cast<double>(i));
        }

        showAccuracyPlot(parameterValues, accuracies, parameterName);
    }
    else if (dataType == "double")
    {
        QVector<double> accuracies;
        QVector<double> parameterValues;

        for (int i = 0; i <= 100; ++i)
        {
            double value = minimum + (maximum - minimum) * i / 100.0;
            double accuracy = calculateAccuracyForParameter(pythonFile, parameterName, value);
            accuracies.append(accuracy);
            parameterValues.append(value);
        }

        showAccuracyPlot(parameterValues, accuracies, parameterName);
    }
    else
    {
        qDebug() << "Unsupported data type:" << dataType;
        return false;
    }

    return true;
}
