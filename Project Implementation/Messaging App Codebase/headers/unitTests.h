#ifndef TESTS_H
#define TESTS_H

#include "mainwindow.h"

#include <QtTest>
#include <QtWidgets>
#include <QtCore>
#include <fstream>

class unitTests: public QObject
{
    Q_OBJECT
public:
    void testApp();

private:
    QVector<QString> eventsToTest;

private slots:
    void Tests_data();
    void Tests();
    //void fileTests();

    // called before every test function
    void init();
    // called after every test function
    void cleanup();
};

#endif // TESTS_H
