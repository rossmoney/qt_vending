#include <QtGui/QApplication>
#include "vendingmachine.h"

/**
 * @brief Main file
 *
 * @param argc
 * @param argv[]
 * @return int
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VendingMachine m;
    m.show();
    
    return a.exec();
}
