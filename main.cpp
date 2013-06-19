#include <QCoreApplication>
#include <QtDebug>
#include <QString>
#include <iostream>
#include "detect.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<*OS;
    return a.exec();
}
