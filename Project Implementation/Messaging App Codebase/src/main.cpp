#include "headers/mainwindow.h"
#include "unitTests.h"
#include <QApplication>

#define RUN_TESTS false // Set to false to run actual application

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    if(RUN_TESTS){
        unitTests acceptanceTests;
        QTest::qExec(&acceptanceTests);
        return 0;
    }

    w.show();
    return a.exec();


}
