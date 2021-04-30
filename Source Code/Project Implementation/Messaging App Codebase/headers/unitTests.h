#ifndef TESTS_H
#define TESTS_H

#include "mainwindow.h"

#include <QtTest>
#include <QtWidgets>
#include <QtCore>
#include <fstream>

class unitTests: public QObject //! Contains unit testing
{
    Q_OBJECT
public:
    void testApp();


private slots:
    void guiTests_data();
    void guiTests();

    void fileTests_data();
    void fileTests();

    // called before every test function
    void init();
    // called after every test function
    void cleanup();
};

#endif // TESTS_H
