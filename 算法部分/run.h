#ifndef RUN_H
#define RUN_H
#include <QString>
bool updateParameterInPythonFile(const QString& pythonFilePath, const QString& parameterName, double parameterValue);
double runPythonProgramAndGetAccuracy(const QString& pythonFilePath);
double calculateAccuracy(const QString& pythonFilePath, const QString& parameterName, double parameterValue);
#endif //RUN_H
