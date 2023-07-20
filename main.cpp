#include <QObject>
#include "SignalA.hpp"
#include "SlotA.hpp"

int main()
{
    SignalA sigA;
    SlotA  slotA;

    QObject::connect(&sigA, SIGNAL(onOperation(int,int)), &slotA, SLOT(add(int,int)));
    sigA.makeOperationSignal();
    return 0;
}
