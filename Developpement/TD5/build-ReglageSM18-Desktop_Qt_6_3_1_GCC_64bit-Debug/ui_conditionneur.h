/********************************************************************************
** Form generated from reading UI file 'conditionneur.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONDITIONNEUR_H
#define UI_CONDITIONNEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Conditionneur
{
public:
    QLabel *labelTension;
    QLineEdit *lineEditTension;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Conditionneur)
    {
        if (Conditionneur->objectName().isEmpty())
            Conditionneur->setObjectName(QString::fromUtf8("Conditionneur"));
        Conditionneur->resize(800, 600);
        labelTension = new QLabel(Conditionneur);
        labelTension->setObjectName(QString::fromUtf8("labelTension"));
        labelTension->setGeometry(QRect(90, 160, 211, 20));
        lineEditTension = new QLineEdit(Conditionneur);
        lineEditTension->setObjectName(QString::fromUtf8("lineEditTension"));
        lineEditTension->setGeometry(QRect(310, 140, 113, 61));
        lineEditTension->setReadOnly(true);
        pushButtonStart = new QPushButton(Conditionneur);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(150, 240, 80, 23));
        pushButtonQuitter = new QPushButton(Conditionneur);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(310, 240, 80, 23));

        retranslateUi(Conditionneur);
        QObject::connect(pushButtonQuitter, &QPushButton::clicked, Conditionneur, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Conditionneur);
    } // setupUi

    void retranslateUi(QWidget *Conditionneur)
    {
        Conditionneur->setWindowTitle(QCoreApplication::translate("Conditionneur", "Conditionneur", nullptr));
        labelTension->setText(QCoreApplication::translate("Conditionneur", "Valeur de la tension de calibrage :", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("Conditionneur", "Lancer Mesure", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("Conditionneur", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Conditionneur: public Ui_Conditionneur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONDITIONNEUR_H
