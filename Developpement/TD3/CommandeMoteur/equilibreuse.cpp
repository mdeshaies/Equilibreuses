#include "equilibreuse.h"
#include "ui_equilibreuse.h"


Equilibreuse::Equilibreuse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equilibreuse)
{
    ui->setupUi(this);
    leCapot = new Capot(laCarte,0,this);
    leMoteur = new Moteur(laCarte,0,4);
    connect(leCapot, &Capot::EtatCapotChange,this,&Equilibreuse::onCapot_EtatCapotChange);
    ui->statusbar->addPermanentWidget(labelEtatCapot);
}

Equilibreuse::~Equilibreuse()
{
    delete ui;
    delete leCapot;
    delete leMoteur;
}

void Equilibreuse::onCapot_EtatCapotChange(const bool _etat)
{
    if(_etat == true){
        QMessageBox msgBox;
        msgBox.setText("ouvert");
        msgBox.exec();
    }else{
        QMessageBox msgBox;
        msgBox.setText("fermé");
        msgBox.exec();
    }
}

