/********************************************************************************
** Form generated from reading UI file 'pop_up.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POP_UP_H
#define UI_POP_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pop_up
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *pop_up)
    {
        if (pop_up->objectName().isEmpty())
            pop_up->setObjectName("pop_up");
        pop_up->resize(465, 286);
        label = new QLabel(pop_up);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 361, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(pop_up);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 190, 171, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(18);
        pushButton->setFont(font1);

        retranslateUi(pop_up);

        QMetaObject::connectSlotsByName(pop_up);
    } // setupUi

    void retranslateUi(QWidget *pop_up)
    {
        pop_up->setWindowTitle(QCoreApplication::translate("pop_up", "Form", nullptr));
        label->setText(QCoreApplication::translate("pop_up", "\350\257\267\347\241\256\344\277\235\350\276\223\345\205\245\344\270\272\346\255\243\347\241\256\347\261\273\345\236\213\347\232\204\346\225\260\345\255\227\357\274\201", nullptr));
        pushButton->setText(QCoreApplication::translate("pop_up", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pop_up: public Ui_pop_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POP_UP_H
