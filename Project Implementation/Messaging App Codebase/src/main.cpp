#include "headers/mainwindow.h"
#include "unitTests.h"
#include <QApplication>

#define RUN_TESTS false // Set to false to run actual application
/*! \mainpage Infomation
 *
 * \section Intro
 *
 * Welcome to the documentation for the MQTT application.
 * Select Classes to navigate documentation.
 *
 * \section testing Testing
 * To run testing change the *RUN_TESTS* defined in main.cpp to true
 *
 *
 *
 *
 */
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
