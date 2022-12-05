#include "conditionneur.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Conditionneur w;
    w.show();
    return a.exec();
}
