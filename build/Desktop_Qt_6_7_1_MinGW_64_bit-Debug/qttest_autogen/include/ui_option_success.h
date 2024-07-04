/********************************************************************************
** Form generated from reading UI file 'option_success.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION_SUCCESS_H
#define UI_OPTION_SUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_option_success
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *option_success)
    {
        if (option_success->objectName().isEmpty())
            option_success->setObjectName("option_success");
        option_success->resize(400, 300);
        pushButton = new QPushButton(option_success);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 220, 141, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(18);
        pushButton->setFont(font);
        label = new QLabel(option_success);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 60, 241, 111));
        label->setFont(font);

        retranslateUi(option_success);

        QMetaObject::connectSlotsByName(option_success);
    } // setupUi

    void retranslateUi(QWidget *option_success)
    {
        option_success->setWindowTitle(QCoreApplication::translate("option_success", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("option_success", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("option_success", "\350\256\276\347\275\256\346\210\220\345\212\237\357\274\214\350\260\203\345\217\202\345\274\200\345\247\213\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class option_success: public Ui_option_success {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_SUCCESS_H
