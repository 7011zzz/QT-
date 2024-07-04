/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Data
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *Data)
    {
        if (Data->objectName().isEmpty())
            Data->setObjectName("Data");
        Data->resize(1174, 615);
        centralwidget = new QWidget(Data);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 20, 211, 41));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 110, 561, 361));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(80, 480, 111, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(210, 530, 181, 28));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(230, 480, 131, 31));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(390, 480, 131, 28));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(620, 110, 521, 361));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(460, 70, 121, 31));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(860, 490, 211, 28));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(440, 40, 171, 31));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(250, 90, 93, 28));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(850, 90, 93, 28));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(720, 490, 93, 28));
        Data->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Data);
        statusbar->setObjectName("statusbar");
        Data->setStatusBar(statusbar);
        menubar = new QMenuBar(Data);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1174, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        Data->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addSeparator();

        retranslateUi(Data);

        QMetaObject::connectSlotsByName(Data);
    } // setupUi

    void retranslateUi(QMainWindow *Data)
    {
        Data->setWindowTitle(QCoreApplication::translate("Data", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Data", "\345\257\274\345\205\245\346\225\260\346\215\256", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Data", "\346\270\205\347\251\272", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Data", "\351\200\211\346\213\251\346\226\260python\347\250\213\345\272\217\346\226\207\344\273\266\345\244\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Data", "\350\246\206\347\233\226\345\216\237\346\234\211\350\276\223\345\205\245\346\225\260\346\215\256", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Data", "\344\277\235\345\255\230\350\276\223\345\205\245\346\225\260\346\215\256", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Data", "\344\277\235\345\255\230\350\276\223\345\207\272\347\273\223\346\236\234", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Data", "\345\234\250\346\255\244\350\276\223\345\205\245\345\217\202\346\225\260\344\270\252\346\225\260", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Data", "\350\276\223\345\205\245\346\225\260\346\215\256", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Data", "\350\276\223\345\207\272\346\225\260\346\215\256", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Data", "\346\270\205\347\251\272", nullptr));
        menu->setTitle(QCoreApplication::translate("Data", "\346\225\260\346\215\256\345\244\204\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Data: public Ui_Data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
