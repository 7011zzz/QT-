/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName("help");
        help->resize(532, 542);
        label = new QLabel(help);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 481, 411));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(16);
        label->setFont(font);
        pushButton = new QPushButton(help);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 440, 161, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(18);
        pushButton->setFont(font1);

        retranslateUi(help);

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QWidget *help)
    {
        help->setWindowTitle(QCoreApplication::translate("help", "Form", nullptr));
        label->setText(QCoreApplication::translate("help", "<html><head/><body><p align=\"justify\">\344\275\277\347\224\250\350\257\264\346\230\216\357\274\232\346\255\244\350\275\257\344\273\266\344\270\272\350\207\252\345\212\250\350\260\203\345\217\202\347\250\213\345\272\217\357\274\214\347\224\250\346\210\267\345\217\252\351\234\200</p><p align=\"justify\">\350\256\276\347\275\256\350\260\203\345\217\202\350\246\201\346\261\202\357\274\214\345\215\263\345\217\257\345\274\200\345\247\213\350\207\252\345\212\250\350\260\203\345\217\202\343\200\202</p><p align=\"justify\"><br/></p><p align=\"justify\">\346\255\245\351\252\244\344\270\200\357\274\232\351\200\211\346\213\251\342\200\234\345\274\200\345\247\213\350\260\203\345\217\202\342\200\235\357\274\214\351\200\211\346\213\251\345\217\202\346\225\260\344\270\252\346\225\260</p><p align=\"justify\"><br/></p><p align=\"justify\">\346\255\245\351\252\244\344\272\214\357\274\232\347\241\256\345\256\232\346\257\217\344\270\252\345\217\202\346\225\260\347\232\204\347\261\273\345\236\213\345\271\266\347\273\231\345\256\232"
                        "\350\214\203\345\233\264</p><p align=\"justify\"><br/></p><p align=\"justify\">\346\255\245\351\252\244\344\270\211\357\274\232\345\215\225\345\207\273\342\200\234\344\270\213\344\270\200\346\255\245\342\200\235\345\274\200\345\247\213\350\260\203\345\217\202\357\274\214\351\235\231\345\276\205\347\254\246\345\220\210\350\246\201\346\261\202</p><p align=\"justify\">\347\232\204\345\217\202\346\225\260\347\224\237\346\210\220</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("help", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
