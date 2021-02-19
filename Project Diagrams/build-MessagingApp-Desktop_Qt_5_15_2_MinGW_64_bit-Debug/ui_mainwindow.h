/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *homeButton;
    QPushButton *groupButton1;
    QPushButton *groupButton2;
    QPushButton *groupButton3;
    QPushButton *groupButton4;
    QPushButton *addNewGroupButton;
    QSpacerItem *verticalSpacer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *groupName;
    QSpacerItem *verticalSpacer_3;
    QLabel *channelGroupName1;
    QPushButton *channel1;
    QPushButton *channel2;
    QPushButton *channel3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *channelGroupName2;
    QPushButton *channel4;
    QPushButton *channel5;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *profileButton;
    QPushButton *settingButton;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *statusLabel;
    QRadioButton *activeRadio;
    QRadioButton *awayRadio;
    QRadioButton *doNotDisturbRadio;
    QRadioButton *invisibleRadio;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *channelLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *searchInput;
    QPushButton *searchButton;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *usersLabel;
    QListWidget *userList;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sendInput;
    QPushButton *sendButton;
    QPlainTextEdit *messageLog;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1876, 985);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 82, 961));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        homeButton = new QPushButton(verticalLayoutWidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));

        verticalLayout->addWidget(homeButton);

        groupButton1 = new QPushButton(verticalLayoutWidget);
        groupButton1->setObjectName(QString::fromUtf8("groupButton1"));

        verticalLayout->addWidget(groupButton1);

        groupButton2 = new QPushButton(verticalLayoutWidget);
        groupButton2->setObjectName(QString::fromUtf8("groupButton2"));

        verticalLayout->addWidget(groupButton2);

        groupButton3 = new QPushButton(verticalLayoutWidget);
        groupButton3->setObjectName(QString::fromUtf8("groupButton3"));

        verticalLayout->addWidget(groupButton3);

        groupButton4 = new QPushButton(verticalLayoutWidget);
        groupButton4->setObjectName(QString::fromUtf8("groupButton4"));

        verticalLayout->addWidget(groupButton4);

        addNewGroupButton = new QPushButton(verticalLayoutWidget);
        addNewGroupButton->setObjectName(QString::fromUtf8("addNewGroupButton"));

        verticalLayout->addWidget(addNewGroupButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(80, 0, 160, 831));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupName = new QLabel(verticalLayoutWidget_2);
        groupName->setObjectName(QString::fromUtf8("groupName"));
        QFont font;
        font.setPointSize(14);
        groupName->setFont(font);

        verticalLayout_2->addWidget(groupName);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        channelGroupName1 = new QLabel(verticalLayoutWidget_2);
        channelGroupName1->setObjectName(QString::fromUtf8("channelGroupName1"));

        verticalLayout_2->addWidget(channelGroupName1);

        channel1 = new QPushButton(verticalLayoutWidget_2);
        channel1->setObjectName(QString::fromUtf8("channel1"));

        verticalLayout_2->addWidget(channel1);

        channel2 = new QPushButton(verticalLayoutWidget_2);
        channel2->setObjectName(QString::fromUtf8("channel2"));

        verticalLayout_2->addWidget(channel2);

        channel3 = new QPushButton(verticalLayoutWidget_2);
        channel3->setObjectName(QString::fromUtf8("channel3"));

        verticalLayout_2->addWidget(channel3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_7);

        channelGroupName2 = new QLabel(verticalLayoutWidget_2);
        channelGroupName2->setObjectName(QString::fromUtf8("channelGroupName2"));

        verticalLayout_2->addWidget(channelGroupName2);

        channel4 = new QPushButton(verticalLayoutWidget_2);
        channel4->setObjectName(QString::fromUtf8("channel4"));

        verticalLayout_2->addWidget(channel4);

        channel5 = new QPushButton(verticalLayoutWidget_2);
        channel5->setObjectName(QString::fromUtf8("channel5"));

        verticalLayout_2->addWidget(channel5);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_11);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(80, 830, 61, 131));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        profileButton = new QPushButton(verticalLayoutWidget_3);
        profileButton->setObjectName(QString::fromUtf8("profileButton"));

        verticalLayout_3->addWidget(profileButton);

        settingButton = new QPushButton(verticalLayoutWidget_3);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));

        verticalLayout_3->addWidget(settingButton);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(140, 830, 101, 131));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        statusLabel = new QLabel(verticalLayoutWidget_4);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        verticalLayout_4->addWidget(statusLabel);

        activeRadio = new QRadioButton(verticalLayoutWidget_4);
        activeRadio->setObjectName(QString::fromUtf8("activeRadio"));
        activeRadio->setChecked(true);

        verticalLayout_4->addWidget(activeRadio);

        awayRadio = new QRadioButton(verticalLayoutWidget_4);
        awayRadio->setObjectName(QString::fromUtf8("awayRadio"));

        verticalLayout_4->addWidget(awayRadio);

        doNotDisturbRadio = new QRadioButton(verticalLayoutWidget_4);
        doNotDisturbRadio->setObjectName(QString::fromUtf8("doNotDisturbRadio"));

        verticalLayout_4->addWidget(doNotDisturbRadio);

        invisibleRadio = new QRadioButton(verticalLayoutWidget_4);
        invisibleRadio->setObjectName(QString::fromUtf8("invisibleRadio"));

        verticalLayout_4->addWidget(invisibleRadio);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 0, 1461, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        channelLabel = new QLabel(horizontalLayoutWidget);
        channelLabel->setObjectName(QString::fromUtf8("channelLabel"));
        channelLabel->setFont(font);

        horizontalLayout->addWidget(channelLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        searchInput = new QLineEdit(horizontalLayoutWidget);
        searchInput->setObjectName(QString::fromUtf8("searchInput"));

        horizontalLayout->addWidget(searchInput);

        searchButton = new QPushButton(horizontalLayoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout->addWidget(searchButton);

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(1700, 0, 171, 961));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        usersLabel = new QLabel(verticalLayoutWidget_5);
        usersLabel->setObjectName(QString::fromUtf8("usersLabel"));
        usersLabel->setFont(font);

        verticalLayout_5->addWidget(usersLabel);

        userList = new QListWidget(verticalLayoutWidget_5);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(userList);
        __qlistwidgetitem->setFont(font1);
        QFont font2;
        font2.setPointSize(12);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(userList);
        __qlistwidgetitem1->setFont(font2);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(userList);
        __qlistwidgetitem2->setFont(font2);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(userList);
        __qlistwidgetitem3->setFont(font2);
        new QListWidgetItem(userList);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(userList);
        __qlistwidgetitem4->setFont(font1);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(userList);
        __qlistwidgetitem5->setFont(font2);
        userList->setObjectName(QString::fromUtf8("userList"));
        userList->setEnabled(true);
        QFont font3;
        font3.setPointSize(8);
        userList->setFont(font3);

        verticalLayout_5->addWidget(userList);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(240, 920, 1461, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sendInput = new QLineEdit(horizontalLayoutWidget_2);
        sendInput->setObjectName(QString::fromUtf8("sendInput"));

        horizontalLayout_2->addWidget(sendInput);

        sendButton = new QPushButton(horizontalLayoutWidget_2);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        horizontalLayout_2->addWidget(sendButton);

        messageLog = new QPlainTextEdit(centralwidget);
        messageLog->setObjectName(QString::fromUtf8("messageLog"));
        messageLog->setGeometry(QRect(240, 30, 1461, 891));
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1876, 20));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        homeButton->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        groupButton1->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        groupButton2->setText(QCoreApplication::translate("MainWindow", "PPM", nullptr));
        groupButton3->setText(QCoreApplication::translate("MainWindow", "SE", nullptr));
        groupButton4->setText(QCoreApplication::translate("MainWindow", "ML", nullptr));
        addNewGroupButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        groupName->setText(QCoreApplication::translate("MainWindow", "SDI Group 30", nullptr));
        channelGroupName1->setText(QCoreApplication::translate("MainWindow", "Discussion Area", nullptr));
        channel1->setText(QCoreApplication::translate("MainWindow", "# idea-board", nullptr));
        channel2->setText(QCoreApplication::translate("MainWindow", " # general", nullptr));
        channel3->setText(QCoreApplication::translate("MainWindow", "# key-documents", nullptr));
        channelGroupName2->setText(QCoreApplication::translate("MainWindow", "Work", nullptr));
        channel4->setText(QCoreApplication::translate("MainWindow", "# meeting-schedule", nullptr));
        channel5->setText(QCoreApplication::translate("MainWindow", "# pending-tasks", nullptr));
        profileButton->setText(QCoreApplication::translate("MainWindow", "Profile", nullptr));
        settingButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        activeRadio->setText(QCoreApplication::translate("MainWindow", "Active", nullptr));
        awayRadio->setText(QCoreApplication::translate("MainWindow", "Away", nullptr));
        doNotDisturbRadio->setText(QCoreApplication::translate("MainWindow", "Do Not Disturb", nullptr));
        invisibleRadio->setText(QCoreApplication::translate("MainWindow", "Invisible", nullptr));
        channelLabel->setText(QCoreApplication::translate("MainWindow", "# general", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        usersLabel->setText(QCoreApplication::translate("MainWindow", "Users", nullptr));

        const bool __sortingEnabled = userList->isSortingEnabled();
        userList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = userList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Online - 4", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = userList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Jarad", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = userList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Hannah", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = userList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Hassaan", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = userList->item(5);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Offline - 1", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = userList->item(6);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "Nick", nullptr));
        userList->setSortingEnabled(__sortingEnabled);

        sendButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
