#include "equilibreuse.h"
#include "ui_equilibreuse.h"

Equilibreuse::Equilibreuse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equilibreuse)
{
    ui->setupUi(this);
    leCapot = new Capot(laCarte,0,this);
    leMoteur = new Moteur(laCarte,0,4);

}

Equilibreuse::~Equilibreuse()
{
    delete ui;
    delete leCapot;
}

