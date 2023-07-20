#include "SignalA.hpp"
#include <QDebug>

SignalA::SignalA(QObject *parent): QObject{parent}
{}

void SignalA::makeOperationSignal()
{
    int result =0;


    result = emit onOperation(50,5);
    qDebug() << "result :" << result;
}
