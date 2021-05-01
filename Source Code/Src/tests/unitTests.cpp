#include "unitTests.h"

void unitTests::guiTests_data()
{
    QTest::addColumn<QTestEventList>("events");
    QTest::addColumn<QString>("expected");

    QTestEventList list1;
    list1.addKeyClick('T');
    list1.addKeyClick('e');
    list1.addKeyClick('s');
    list1.addKeyClick('t');
    list1.addKeyClick(' ');
    list1.addKeyClick('1');
    QTest::newRow("Test 1") << list1 << "Test 1";

    QTestEventList list2;
    list2.addKeyClick('T');
    list2.addKeyClick('e');
    list2.addKeyClick('s');
    list2.addKeyClick('t');
    list2.addKeyClick(' ');
    list2.addKeyClick('2');
    list2.addKeyClick('~');
    QTest::newRow("Test 2") << list2 << "Test 2~";

}

void unitTests::guiTests(){
    QFETCH(QTestEventList, events);
    QFETCH(QString, expected);
    QLineEdit lineEdit;

    events.simulate(&lineEdit);

    QCOMPARE(lineEdit.text(), expected);

}

void unitTests::fileTests_data()
{
    MainWindow w;

    QTest::addColumn<QString>("input");
    QTest::addColumn<QString>("files");

    QTest::newRow("credentials") << "Admin|5483:4E126B8C1C470693827C90C0679D239870668C57033575D0BD8E7773D2EBFBC6\n"
                                    "Mod|4571:2408638CBA0E278893064BCDA457090F4BBD9F32F3B51E98CE3CAADCE04165F6\n"
                                    "User|5552:F186B25C10F7EA0F42DDB4074DB643C5B8BA3F861F45E6F395888C703CEE8388\n"
                                 << QString::fromStdString(w.credFilepath);


    QTest::newRow("rooms") << "Room X|Channel Y\n" << QString::fromStdString(w.roomFilepath);

    QTest::newRow("users") << "Admin|Room X\n"
                              "Mod|Room X\n"
                              "User\n" << QString::fromStdString(w.userFilepath);

    QTest::newRow("admins") << "Room X|Admin|Mod\n" << QString::fromStdString(w.adminFilepath);

}


void unitTests::fileTests()
{
    QFETCH(QString, input);

    QFETCH(QString, files);

    // Writes to file
    std::ofstream writeFile;
    writeFile.open(files.toStdString());
    QCOMPARE(writeFile.is_open(), true);

    writeFile << input.toStdString();

    writeFile.close();
    QCOMPARE(writeFile.is_open(), false);


    // Reads file
    std::ifstream readFile;
    readFile.open(files.toStdString());
    QCOMPARE(readFile.is_open(), true);

    std::string fileContent((std::istreambuf_iterator<char>(readFile)), std::istreambuf_iterator<char>());

    QCOMPARE(fileContent, input.toStdString());

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
