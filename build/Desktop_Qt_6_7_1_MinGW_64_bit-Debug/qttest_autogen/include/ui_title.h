/********************************************************************************
** Form generated from reading UI file 'title.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLE_H
#define UI_TITLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_title
{
public:
    QLabel *label_NumOfParam;
    QPushButton *button_nextstep;
    QWidget *layoutWidget;
    QVBoxLayout *choose_num;
    QRadioButton *num_1;
    QRadioButton *num_2;
    QRadioButton *num_3;
    QRadioButton *num_4;
    QPushButton *button_quxiao;
    QPushButton *former_step;

    void setupUi(QWidget *title)
    {
        if (title->objectName().isEmpty())
            title->setObjectName("title");
        title->resize(384, 304);
        label_NumOfParam = new QLabel(title);
        label_NumOfParam->setObjectName("label_NumOfParam");
        label_NumOfParam->setGeometry(QRect(40, 40, 211, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(20);
        label_NumOfParam->setFont(font);
        button_nextstep = new QPushButton(title);
        button_nextstep->setObjectName("button_nextstep");
        button_nextstep->setGeometry(QRect(220, 180, 91, 31));
        QFont font1;
        font1.setPointSize(16);
        button_nextstep->setFont(font1);
        layoutWidget = new QWidget(title);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 100, 111, 151));
        choose_num = new QVBoxLayout(layoutWidget);
        choose_num->setObjectName("choose_num");
        choose_num->setContentsMargins(0, 0, 0, 0);
        num_1 = new QRadioButton(layoutWidget);
        num_1->setObjectName("num_1");
        num_1->setFont(font1);

        choose_num->addWidget(num_1);

        num_2 = new QRadioButton(layoutWidget);
        num_2->setObjectName("num_2");
        num_2->setFont(font1);

        choose_num->addWidget(num_2);

        num_3 = new QRadioButton(layoutWidget);
        num_3->setObjectName("num_3");
        num_3->setFont(font1);

        choose_num->addWidget(num_3);

        num_4 = new QRadioButton(layoutWidget);
        num_4->setObjectName("num_4");
        num_4->setFont(font1);

        choose_num->addWidget(num_4);

        button_quxiao = new QPushButton(title);
        button_quxiao->setObjectName("button_quxiao");
        button_quxiao->setGeometry(QRect(220, 220, 91, 31));
        QFont font2;
        font2.setPointSize(18);
        button_quxiao->setFont(font2);
        former_step = new QPushButton(title);
        former_step->setObjectName("former_step");
        former_step->setGeometry(QRect(220, 140, 91, 31));
        former_step->setFont(font2);

        retranslateUi(title);

        QMetaObject::connectSlotsByName(title);
    } // setupUi

    void retranslateUi(QWidget *title)
    {
        title->setWindowTitle(QCoreApplication::translate("title", "Form", nullptr));
        label_NumOfParam->setText(QCoreApplication::translate("title", "\350\257\267\351\200\211\346\213\251\345\217\202\346\225\260\344\270\252\346\225\260", nullptr));
        button_nextstep->setText(QCoreApplication::translate("title", "\344\270\213\344\270\200\346\255\245", nullptr));
        num_1->setText(QCoreApplication::translate("title", "1\344\270\252", nullptr));
        num_2->setText(QCoreApplication::translate("title", "2\344\270\252", nullptr));
        num_3->setText(QCoreApplication::translate("title", "3\344\270\252", nullptr));
        num_4->setText(QCoreApplication::translate("title", "4\344\270\252", nullptr));
        button_quxiao->setText(QCoreApplication::translate("title", "\345\217\226\346\266\210", nullptr));
        former_step->setText(QCoreApplication::translate("title", "\344\270\212\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class title: public Ui_title {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLE_H
