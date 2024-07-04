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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *cancle;
    QPushButton *help;
    QPushButton *start;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(474, 426);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        cancle = new QPushButton(centralwidget);
        cancle->setObjectName("cancle");
        cancle->setGeometry(QRect(160, 360, 131, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(18);
        cancle->setFont(font);
        help = new QPushButton(centralwidget);
        help->setObjectName("help");
        help->setGeometry(QRect(160, 310, 131, 41));
        help->setFont(font);
        start = new QPushButton(centralwidget);
        start->setObjectName("start");
        start->setGeometry(QRect(160, 260, 131, 41));
        start->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 351, 191));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(28);
        label->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        cancle->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        help->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\260\203\345\217\202", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\350\207\252\345\212\250\350\260\203\345\217\202\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
