#include "conditionneur.h"
#include "ui_conditionneur.h"
#define TEMPO_MESURE 500

Conditionneur::Conditionneur(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Conditionneur)
{
    ui->setupUi(this);
    connect(&timerMesure,&QTimer::timeout,this,&Conditionneur::onTimerMesure_timeout);

}

void Conditionneur::onTimerMesure_timeout()
{

}

Conditionneur::~Conditionneur()
{
    delete ui;
}


void Conditionneur::on_pushButtonStart_clicked()
{
    timerMesure.start(TEMPO_MESURE);
    if(ui->pushButtonStart->text()=="Lancer Mesure"){
        ui->pushButtonStart->setText("Arrếter Mesure");
    }else{
        ui->pushButtonStart->setText("Lancer Mesure");
    }


}


