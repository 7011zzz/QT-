#ifndef PARAMETER_PRACTICE_H
#define PARAMETER_PRACTICE_H
#include <QString>

bool read_parameter(const QString& File,int parameter_index,const QString& dataType, double& minimum, double& maximum);
bool adjustParameter(int parameter_index,const QString& parameter_name,const QString& pythonFile,const QString& dataType, double& minimum, double& maximum);
void showAccuracyPlot(const QVector<double>& parameterValues, const QVector<double>& accuracies, const QString& parameterName);
#endif // PARAMETER_PRACTICE_H
