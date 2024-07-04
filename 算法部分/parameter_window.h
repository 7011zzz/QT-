#ifndef PARAMETER_WINDOW_H
#define PARAMETER_WINDOW_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class parameter_window : public QWidget
{
    Q_OBJECT

public:
    parameter_window(QWidget* parent = nullptr) : QWidget(parent) {}

private:
    QLabel* m_fileLabel;
    QLineEdit* m_fileInput;
    QLabel* m_paramIndexLabel;
    QLineEdit* m_paramIndexInput;
    QLabel* m_paramNameLabel;
    QLineEdit* m_paramNameInput;
    QPushButton* m_submitButton;

private slots:
    void submitForm();
};

#endif
