#include "parameter_window.h"
#include "parameter_practice.h"
#include <QVBoxLayout>
#include <QDebug>
#include <QString>
const QString File="save.txt";
parameter_window::parameter_window(QWidget* parent) : QWidget(parent)
{
    setWindowTitle("Import Python File");
    setGeometry(100, 100, 400, 200);

    // 创建布局和小部件
    QVBoxLayout* layout = new QVBoxLayout;
    m_fileLabel = new QLabel("Python File:");
    m_fileInput = new QLineEdit;
    m_paramIndexLabel = new QLabel("Parameter Index:");
    m_paramIndexInput = new QLineEdit;
    m_paramNameLabel = new QLabel("Parameter Name:");
    m_paramNameInput = new QLineEdit;
    m_submitButton = new QPushButton("Submit");
    connect(m_submitButton, &QPushButton::clicked, this, &parameter_window::submitForm);

    layout->addWidget(m_fileLabel);
    layout->addWidget(m_fileInput);
    layout->addWidget(m_paramIndexLabel);
    layout->addWidget(m_paramIndexInput);
    layout->addWidget(m_paramNameLabel);
    layout->addWidget(m_paramNameInput);
    layout->addWidget(m_submitButton);

    setLayout(layout);
}

void parameter_window::submitForm()
{
    QString pythonFile = m_fileInput->text();
    int paramIndex = m_paramIndexInput->text().toInt();
    QString paramName = m_paramNameInput->text();

    QString dataType;
    double minimum, maximum;

    if (read_parameter(File, paramIndex, dataType, minimum, maximum))
    {
        // 读取参数上下界成功
        qDebug() << "Python File:" << File;
        qDebug() << "Parameter Index:" << paramIndex;
        qDebug() << "Parameter Name:" << paramName;
        qDebug() << "Data Type:" << dataType;
        qDebug() << "Min:" << minimum;
        qDebug() << "Max:" << maximum;
        read_parameter(File, paramIndex, dataType, minimum, maximum);
        adjustParameter(paramIndex, paramName, pythonFile, dataType, minimum, maximum);
    }
    else
    {
        qDebug() << "Failed to read parameter bounds.";
    }
}
