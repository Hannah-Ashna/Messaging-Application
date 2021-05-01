#include "unitTests.h"

void unitTests::guiTests_data()
{
    QTest::addColumn<QTestEventList>("events");
    QTest::addColumn<QString>("expected");

    QTestEventList list1;
    list1.addKeyClick('o');
    list1.addKeyClick('w');
    list1.addKeyClick('o');
    QTest::newRow("username") << list1 << "owo";
    unitTests::eventsToTest.push_back("owo");

    QTestEventList list2;
    list1.addKeyClick('o');
    list1.addKeyClick('w');
    list1.addKeyClick('o');
    QTest::newRow("password") << list2 << "owo";
    unitTests::eventsToTest.push_back("owo");
}

void unitTests::guiTests()
{
    QFETCH(QTestEventList, events);
    QFETCH(QString, expected);
    QLineEdit lineEdit;

    events.simulate(&lineEdit);

    QCOMPARE(lineEdit.text(), expected);
}

// called before every test function
void unitTests::init()
{

}

// called after every test function
void unitTests::cleanup(){

}

// full Qt application
//QTEST_MAIN(MainWindow);
