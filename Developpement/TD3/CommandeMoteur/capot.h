#ifndef CAPOT_H
#define CAPOT_H


#include <QTimer>
#include <QObject>
#include "mcculdaq.h"

#define TEMPO_CAPOT 500

class Capot : public QObject
{
    Q_OBJECT
public:
    Capot(MccUldaq &_laCarte, const int _numDio, QObject *parent = nullptr);
    void onTimerCapot_timeout();
    bool getEtatCapot() const;

private:
    bool etatCapot;
    int numDio;
    QTimer timerCapot;
    MccUldaq laCarte;
};

#endif // CAPOT_H

