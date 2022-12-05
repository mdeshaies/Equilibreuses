#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H

#include <QMainWindow>
#include <QLabel>
#include <QMessageBox>
#include "mcculdaq.h"
#include "capot.h"
#include "moteur.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Equilibreuse; }
QT_END_NAMESPACE

class Equilibreuse : public QMainWindow
{
    Q_OBJECT

public:
    Equilibreuse(QWidget *parent = nullptr);
    ~Equilibreuse();
private slots:
    void onCapot_EtatCapotChange(const bool _etat);

private:
    Ui::Equilibreuse *ui;
    MccUldaq laCarte;
    Capot *leCapot;
    Moteur *leMoteur;
    QLabel *labelEtatCapot;
};
#endif // EQUILIBREUSE_H
