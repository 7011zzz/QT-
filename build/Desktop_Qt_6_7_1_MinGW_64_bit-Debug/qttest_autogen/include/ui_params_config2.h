/********************************************************************************
** Form generated from reading UI file 'params_config2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMS_CONFIG2_H
#define UI_PARAMS_CONFIG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_params_config2
{
public:
    QComboBox *comboBox_1;
    QLabel *Title;
    QLineEdit *range_max;
    QLineEdit *range_min;
    QPushButton *next_step;
    QLabel *Kind;
    QLabel *Range;
    QPushButton *cancel_button;
    QLabel *label_4;
    QPushButton *former_step;
    QLineEdit *range_max_2;
    QLineEdit *range_min_2;
    QLabel *Kind_2;
    QComboBox *comboBox_2;
    QLabel *Range_2;
    QLabel *label_5;

    void setupUi(QWidget *params_config2)
    {
        if (params_config2->objectName().isEmpty())
            params_config2->setObjectName("params_config2");
        params_config2->resize(481, 461);
        comboBox_1 = new QComboBox(params_config2);
        comboBox_1->addItem(QString());
        comboBox_1->addItem(QString());
        comboBox_1->addItem(QString());
        comboBox_1->setObjectName("comboBox_1");
        comboBox_1->setGeometry(QRect(150, 90, 141, 31));
        QFont font;
        font.setPointSize(14);
        comboBox_1->setFont(font);
        Title = new QLabel(params_config2);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(40, 20, 141, 41));
        QFont font1;
        font1.setPointSize(18);
        Title->setFont(font1);
        range_max = new QLineEdit(params_config2);
        range_max->setObjectName("range_max");
        range_max->setGeometry(QRect(290, 160, 81, 31));
        range_min = new QLineEdit(params_config2);
        range_min->setObjectName("range_min");
        range_min->setGeometry(QRect(160, 160, 81, 31));
        next_step = new QPushButton(params_config2);
        next_step->setObjectName("next_step");
        next_step->setGeometry(QRect(170, 390, 101, 41));
        next_step->setFont(font);
        Kind = new QLabel(params_config2);
        Kind->setObjectName("Kind");
        Kind->setGeometry(QRect(40, 80, 141, 51));
        Kind->setFont(font1);
        Range = new QLabel(params_config2);
        Range->setObjectName("Range");
        Range->setGeometry(QRect(40, 150, 111, 41));
        Range->setFont(font1);
        cancel_button = new QPushButton(params_config2);
        cancel_button->setObjectName("cancel_button");
        cancel_button->setGeometry(QRect(300, 390, 101, 41));
        cancel_button->setFont(font);
        label_4 = new QLabel(params_config2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 170, 16, 16));
        label_4->setFont(font1);
        former_step = new QPushButton(params_config2);
        former_step->setObjectName("former_step");
        former_step->setGeometry(QRect(40, 390, 101, 41));
        former_step->setFont(font);
        range_max_2 = new QLineEdit(params_config2);
        range_max_2->setObjectName("range_max_2");
        range_max_2->setGeometry(QRect(290, 310, 81, 31));
        range_min_2 = new QLineEdit(params_config2);
        range_min_2->setObjectName("range_min_2");
        range_min_2->setGeometry(QRect(160, 310, 81, 31));
        Kind_2 = new QLabel(params_config2);
        Kind_2->setObjectName("Kind_2");
        Kind_2->setGeometry(QRect(40, 230, 141, 51));
        Kind_2->setFont(font1);
        comboBox_2 = new QComboBox(params_config2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(150, 240, 141, 31));
        comboBox_2->setFont(font);
        Range_2 = new QLabel(params_config2);
        Range_2->setObjectName("Range_2");
        Range_2->setGeometry(QRect(40, 300, 111, 41));
        Range_2->setFont(font1);
        label_5 = new QLabel(params_config2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(260, 320, 16, 16));
        label_5->setFont(font1);

        retranslateUi(params_config2);

        QMetaObject::connectSlotsByName(params_config2);
    } // setupUi

    void retranslateUi(QWidget *params_config2)
    {
        params_config2->setWindowTitle(QCoreApplication::translate("params_config2", "Form", nullptr));
        comboBox_1->setItemText(0, QCoreApplication::translate("params_config2", "\350\257\267\351\200\211\346\213\251", nullptr));
        comboBox_1->setItemText(1, QCoreApplication::translate("params_config2", "int", nullptr));
        comboBox_1->setItemText(2, QCoreApplication::translate("params_config2", "double", nullptr));

        Title->setText(QCoreApplication::translate("params_config2", "\345\217\202\346\225\260\344\270\252\346\225\260\357\274\2322", nullptr));
        next_step->setText(QCoreApplication::translate("params_config2", "\344\270\213\344\270\200\346\255\245", nullptr));
        Kind->setText(QCoreApplication::translate("params_config2", "\345\217\202\346\225\2601\347\261\273\345\236\213", nullptr));
        Range->setText(QCoreApplication::translate("params_config2", "\345\217\202\346\225\2601\350\214\203\345\233\264:", nullptr));
        cancel_button->setText(QCoreApplication::translate("params_config2", "\345\217\226\346\266\210", nullptr));
        label_4->setText(QCoreApplication::translate("params_config2", "~", nullptr));
        former_step->setText(QCoreApplication::translate("params_config2", "\344\270\212\344\270\200\346\255\245", nullptr));
        Kind_2->setText(QCoreApplication::translate("params_config2", "\345\217\202\346\225\2602\347\261\273\345\236\213", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("params_config2", "\350\257\267\351\200\211\346\213\251", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("params_config2", "int", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("params_config2", "double", nullptr));

        Range_2->setText(QCoreApplication::translate("params_config2", "\345\217\202\346\225\2602\350\214\203\345\233\264:", nullptr));
        label_5->setText(QCoreApplication::translate("params_config2", "~", nullptr));
    } // retranslateUi

};

namespace Ui {
    class params_config2: public Ui_params_config2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMS_CONFIG2_H
