/********************************************************************************
** Form generated from reading UI file 'pop_up2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POP_UP2_H
#define UI_POP_UP2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pop_up2
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *pop_up2)
    {
        if (pop_up2->objectName().isEmpty())
            pop_up2->setObjectName("pop_up2");
        pop_up2->resize(459, 369);
        pushButton = new QPushButton(pop_up2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 220, 171, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(18);
        pushButton->setFont(font);
        label = new QLabel(pop_up2);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 70, 361, 141));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(20);
        label->setFont(font1);

        retranslateUi(pop_up2);

        QMetaObject::connectSlotsByName(pop_up2);
    } // setupUi

    void retranslateUi(QWidget *pop_up2)
    {
        pop_up2->setWindowTitle(QCoreApplication::translate("pop_up2", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("pop_up2", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("pop_up2", "\350\257\267\347\241\256\344\277\235\345\214\272\351\227\264\344\270\212\351\231\220\345\244\247\344\272\216\344\270\213\351\231\220\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pop_up2: public Ui_pop_up2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POP_UP2_H
