/********************************************************************************
** Form generated from reading UI file 'widgetusb202.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETUSB202_H
#define UI_WIDGETUSB202_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetUSB202
{
public:
    QPushButton *pushButton_Quitter;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_BP4;
    QCheckBox *checkBox_LED3;
    QCheckBox *checkBox_LED1;
    QLabel *label_BP3;
    QCheckBox *checkBox_LED2;
    QLabel *label_BP2;
    QCheckBox *checkBox_LED4;
    QLabel *label_BP1;

    void setupUi(QWidget *WidgetUSB202)
    {
        if (WidgetUSB202->objectName().isEmpty())
            WidgetUSB202->setObjectName(QString::fromUtf8("WidgetUSB202"));
        WidgetUSB202->resize(800, 600);
        QFont font;
        font.setPointSize(15);
        WidgetUSB202->setFont(font);
        pushButton_Quitter = new QPushButton(WidgetUSB202);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(320, 150, 80, 61));
        pushButton_Quitter->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(WidgetUSB202);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 150, 171, 146));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_BP4 = new QLabel(widget);
        label_BP4->setObjectName(QString::fromUtf8("label_BP4"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("aakar")});
        font1.setPointSize(15);
        label_BP4->setFont(font1);
        label_BP4->setStyleSheet(QString::fromUtf8("background-color:rgb(255,0,0)"));
        label_BP4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_BP4, 4, 0, 1, 1);

        checkBox_LED3 = new QCheckBox(widget);
        checkBox_LED3->setObjectName(QString::fromUtf8("checkBox_LED3"));

        gridLayout->addWidget(checkBox_LED3, 3, 1, 1, 1);

        checkBox_LED1 = new QCheckBox(widget);
        checkBox_LED1->setObjectName(QString::fromUtf8("checkBox_LED1"));

        gridLayout->addWidget(checkBox_LED1, 1, 1, 1, 1);

        label_BP3 = new QLabel(widget);
        label_BP3->setObjectName(QString::fromUtf8("label_BP3"));
        label_BP3->setFont(font1);
        label_BP3->setStyleSheet(QString::fromUtf8("background-color:rgb(255,0,0)"));
        label_BP3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_BP3, 3, 0, 1, 1);

        checkBox_LED2 = new QCheckBox(widget);
        checkBox_LED2->setObjectName(QString::fromUtf8("checkBox_LED2"));

        gridLayout->addWidget(checkBox_LED2, 2, 1, 1, 1);

        label_BP2 = new QLabel(widget);
        label_BP2->setObjectName(QString::fromUtf8("label_BP2"));
        label_BP2->setFont(font1);
        label_BP2->setStyleSheet(QString::fromUtf8("background-color:rgb(255,0,0)"));
        label_BP2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_BP2, 2, 0, 1, 1);

        checkBox_LED4 = new QCheckBox(widget);
        checkBox_LED4->setObjectName(QString::fromUtf8("checkBox_LED4"));

        gridLayout->addWidget(checkBox_LED4, 4, 1, 1, 1);

        label_BP1 = new QLabel(widget);
        label_BP1->setObjectName(QString::fromUtf8("label_BP1"));
        label_BP1->setFont(font1);
        label_BP1->setStyleSheet(QString::fromUtf8("background-color:rgb(255,0,0)"));
        label_BP1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_BP1, 1, 0, 1, 1);


        retranslateUi(WidgetUSB202);
        QObject::connect(pushButton_Quitter, &QPushButton::clicked, WidgetUSB202, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(WidgetUSB202);
    } // setupUi

    void retranslateUi(QWidget *WidgetUSB202)
    {
        WidgetUSB202->setWindowTitle(QCoreApplication::translate("WidgetUSB202", "WidgetUSB202", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("WidgetUSB202", "Quitter", nullptr));
        label_BP4->setText(QCoreApplication::translate("WidgetUSB202", "BP4", nullptr));
        checkBox_LED3->setText(QCoreApplication::translate("WidgetUSB202", "LED3", nullptr));
        checkBox_LED1->setText(QCoreApplication::translate("WidgetUSB202", "LED1", nullptr));
        label_BP3->setText(QCoreApplication::translate("WidgetUSB202", "BP3", nullptr));
        checkBox_LED2->setText(QCoreApplication::translate("WidgetUSB202", "LED2", nullptr));
        label_BP2->setText(QCoreApplication::translate("WidgetUSB202", "BP2", nullptr));
        checkBox_LED4->setText(QCoreApplication::translate("WidgetUSB202", "LED4", nullptr));
        label_BP1->setText(QCoreApplication::translate("WidgetUSB202", "BP1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetUSB202: public Ui_WidgetUSB202 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETUSB202_H
