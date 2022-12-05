#ifndef CONDITIONNEUR_H
#define CONDITIONNEUR_H

#include <QWidget>
#include <QTimer>
#include "mcculdaq.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Conditionneur; }
QT_END_NAMESPACE

class Conditionneur : public QWidget
{
    Q_OBJECT

public:
    Conditionneur(QWidget *parent = nullptr);

    ~Conditionneur();

private slots:
    void on_pushButtonStart_clicked();
    void onTimerMesure_timeout();
private:
    Ui::Conditionneur *ui;
    QTimer timerMesure;
    MccUldaq laCarte;
};
#endif // CONDITIONNEUR_H
