#include "unitTests.h"

void unitTests::Tests_data()
{    
    MainWindow w;
    QTest::addColumn<QTestEventList>("events");
    QTest::addColumn<QString>("expected");
    QTest::addColumn<QString>("files");

    QTestEventList list1;
    list1.addKeyClick('T');
    list1.addKeyClick('e');
    list1.addKeyClick('s');
    list1.addKeyClick('t');
    list1.addKeyClick(' ');
    list1.addKeyClick('1');
    QTest::newRow("credentials") << list1 << "Test 1" << QString::fromStdString(w.credFilepath);
    unitTests::eventsToTest.push_back("Test 1");

    QTestEventList list2;
    list2.addKeyClick('T');
    list2.addKeyClick('e');
    list2.addKeyClick('s');
    list2.addKeyClick('t');
    list2.addKeyClick(' ');
    list2.addKeyClick('2');
    QTest::newRow("rooms") << list2 << "Test 2" << QString::fromStdString(w.roomFilepath);
    unitTests::eventsToTest.push_back("Test 2");

    QTestEventList list3;
    list3.addKeyClick('T');
    list3.addKeyClick('e');
    list3.addKeyClick('s');
    list3.addKeyClick('t');
    list3.addKeyClick(' ');
    list3.addKeyClick('3');
    QTest::newRow("users") << list3 << "Test 3" << QString::fromStdString(w.userFilepath);
    unitTests::eventsToTest.push_back("Test 3");

    QTestEventList list4;
    list4.addKeyClick('T');
    list4.addKeyClick('e');
    list4.addKeyClick('s');
    list4.addKeyClick('t');
    list4.addKeyClick(' ');
    list4.addKeyClick('4');
    QTest::newRow("admins") << list4 << "Test 4" << QString::fromStdString(w.adminFilepath);
    unitTests::eventsToTest.push_back("Test 4");
}

void unitTests::Tests()
{
    QFETCH(QTestEventList, events);
    QFETCH(QString, expected);
    QLineEdit lineEdit;

    events.simulate(&lineEdit);

    QCOMPARE(lineEdit.text(), expected);

    std::string line;
    QFETCH(QString, files);

    // Writes to file
    std::ofstream writeFile;
    writeFile.open(files.toStdString());
    QCOMPARE(writeFile.is_open(), true);

    writeFile << lineEdit.text().toStdString();

    writeFile.close();
    QCOMPARE(writeFile.is_open(), false);


    // Reads file
    std::ifstream readFile;
    readFile.open(files.toStdString());
    QCOMPARE(readFile.is_open(), true);

    line = "";
    getline(readFile, line);
    QCOMPARE(line, expected.toStdString());

    readFile.close();
    QCOMPARE(readFile.is_open(), false);
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
