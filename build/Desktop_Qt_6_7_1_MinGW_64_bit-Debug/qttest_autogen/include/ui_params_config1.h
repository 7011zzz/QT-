/********************************************************************************
** Form generated from reading UI file 'params_config1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMS_CONFIG1_H
#define UI_PARAMS_CONFIG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_params_config1
{
public:
    QLabel *Title;
    QLabel *Kind;
    QLabel *Range;
    QLineEdit *range_min;
    QLineEdit *range_max;
    QLabel *label_4;
    QPushButton *former_step;
    QPushButton *next_step;
    QPushButton *cancel_button;
    QComboBox *comboBox_1;

    void setupUi(QWidget *params_config1)
    {
        if (params_config1->objectName().isEmpty())
            params_config1->setObjectName("params_config1");
        params_config1->resize(440, 338);
        Title = new QLabel(params_config1);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(30, 20, 141, 41));
        QFont font;
        font.setPointSize(18);
        Title->setFont(font);
        Kind = new QLabel(params_config1);
        Kind->setObjectName("Kind");
        Kind->setGeometry(QRect(30, 80, 141, 51));
        Kind->setFont(font);
        Range = new QLabel(params_config1);
        Range->setObjectName("Range");
        Range->setGeometry(QRect(30, 150, 101, 41));
        Range->setFont(font);
        range_min = new QLineEdit(params_config1);
        range_min->setObjectName("range_min");
        range_min->setGeometry(QRect(150, 160, 81, 31));
        range_max = new QLineEdit(params_config1);
        range_max->setObjectName("range_max");
        range_max->setGeometry(QRect(280, 160, 81, 31));
        label_4 = new QLabel(params_config1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 170, 16, 16));
        label_4->setFont(font);
        former_step = new QPushButton(params_config1);
        former_step->setObjectName("former_step");
        former_step->setGeometry(QRect(50, 240, 101, 41));
        QFont font1;
        font1.setPointSize(14);
        former_step->setFont(font1);
        next_step = new QPushButton(params_config1);
        next_step->setObjectName("next_step");
        next_step->setGeometry(QRect(180, 240, 101, 41));
        next_step->setFont(font1);
        cancel_button = new QPushButton(params_config1);
        cancel_button->setObjectName("cancel_button");
        cancel_button->setGeometry(QRect(310, 240, 101, 41));
        cancel_button->setFont(font1);
        comboBox_1 = new QComboBox(params_config1);
        comboBox_1->addItem(QString());
        comboBox_1->addItem(QString());
        comboBox_1->addItem(QString());
        comboBox_1->setObjectName("comboBox_1");
        comboBox_1->setGeometry(QRect(140, 90, 141, 31));
        comboBox_1->setFont(font1);

        retranslateUi(params_config1);

        QMetaObject::connectSlotsByName(params_config1);
    } // setupUi

    void retranslateUi(QWidget *params_config1)
    {
        params_config1->setWindowTitle(QCoreApplication::translate("params_config1", "Form", nullptr));
        Title->setText(QCoreApplication::translate("params_config1", "\345\217\202\346\225\260\344\270\252\346\225\260\357\274\2321", nullptr));
        Kind->setText(QCoreApplication::translate("params_config1", "\345\217\202\346\225\260\347\261\273\345\236\213", nullptr));
        Range->setText(QCoreApplication::translate("params_config1", "\345\217\202\346\225\260\350\214\203\345\233\264:", nullptr));
        label_4->setText(QCoreApplication::translate("params_config1", "~", nullptr));
        former_step->setText(QCoreApplication::translate("params_config1", "\344\270\212\344\270\200\346\255\245", nullptr));
        next_step->setText(QCoreApplication::translate("params_config1", "\344\270\213\344\270\200\346\255\245", nullptr));
        cancel_button->setText(QCoreApplication::translate("params_config1", "\345\217\226\346\266\210", nullptr));
        comboBox_1->setItemText(0, QCoreApplication::translate("params_config1", "\350\257\267\351\200\211\346\213\251", nullptr));
        comboBox_1->setItemText(1, QCoreApplication::translate("params_config1", "int", nullptr));
        comboBox_1->setItemText(2, QCoreApplication::translate("params_config1", "double", nullptr));

    } // retranslateUi

};

namespace Ui {
    class params_config1: public Ui_params_config1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMS_CONFIG1_H
