/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *MessagingPage;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sendInput;
    QPushButton *sendButton;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *profileButton;
    QPushButton *settingsButton;
    QSpacerItem *verticalSpacer_3;
    QFrame *line;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *groupName;
    QSpacerItem *horizontalSpacer_6;
    QLabel *channelLabel_2;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *channelDropDown;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QTextBrowser *messageLog;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *statusLabel;
    QRadioButton *activeRadio;
    QRadioButton *awayRadio;
    QRadioButton *doNotDisturbRadio;
    QRadioButton *invisibleRadio;
    QFrame *line_5;
    QFrame *line_3;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *usersLabel;
    QSpacerItem *horizontalSpacer_5;
    QListWidget *userList;
    QFrame *line_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *homeButton;
    QPushButton *groupButton1;
    QPushButton *groupButton2;
    QPushButton *groupButton3;
    QPushButton *groupButton4;
    QPushButton *addNewGroupButton;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *channelLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *searchInput;
    QPushButton *searchButton;
    QWidget *SettingsPage;
    QLabel *label;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *hostEdit;
    QLabel *label_3;
    QSpinBox *portSpinBox;
    QPushButton *buttonConnect;
    QFrame *line_6;
    QFrame *line_7;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_8;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1921, 1061));
        MessagingPage = new QWidget();
        MessagingPage->setObjectName(QString::fromUtf8("MessagingPage"));
        horizontalLayoutWidget_2 = new QWidget(MessagingPage);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(350, 1000, 1371, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sendInput = new QLineEdit(horizontalLayoutWidget_2);
        sendInput->setObjectName(QString::fromUtf8("sendInput"));

        horizontalLayout_2->addWidget(sendInput);

        sendButton = new QPushButton(horizontalLayoutWidget_2);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setAutoDefault(false);
        sendButton->setFlat(false);

        horizontalLayout_2->addWidget(sendButton);

        verticalLayoutWidget_3 = new QWidget(MessagingPage);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(110, 920, 81, 131));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        profileButton = new QPushButton(verticalLayoutWidget_3);
        profileButton->setObjectName(QString::fromUtf8("profileButton"));

        verticalLayout_3->addWidget(profileButton);

        settingsButton = new QPushButton(verticalLayoutWidget_3);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));

        verticalLayout_3->addWidget(settingsButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        line = new QFrame(MessagingPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(330, 0, 21, 1061));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_2 = new QWidget(MessagingPage);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(109, 10, 221, 891));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupName = new QLabel(verticalLayoutWidget_2);
        groupName->setObjectName(QString::fromUtf8("groupName"));
        QFont font;
        font.setPointSize(14);
        groupName->setFont(font);

        verticalLayout_2->addWidget(groupName);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_6);

        channelLabel_2 = new QLabel(verticalLayoutWidget_2);
        channelLabel_2->setObjectName(QString::fromUtf8("channelLabel_2"));

        verticalLayout_2->addWidget(channelLabel_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_7);

        channelDropDown = new QComboBox(verticalLayoutWidget_2);
        channelDropDown->addItem(QString());
        channelDropDown->addItem(QString());
        channelDropDown->addItem(QString());
        channelDropDown->addItem(QString());
        channelDropDown->addItem(QString());
        channelDropDown->setObjectName(QString::fromUtf8("channelDropDown"));

        verticalLayout_2->addWidget(channelDropDown);

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

        messageLog = new QTextBrowser(MessagingPage);
        messageLog->setObjectName(QString::fromUtf8("messageLog"));
        messageLog->setGeometry(QRect(350, 60, 1371, 931));
        verticalLayoutWidget_4 = new QWidget(MessagingPage);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(200, 920, 131, 135));
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

        line_5 = new QFrame(MessagingPage);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(100, 40, 1821, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(MessagingPage);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(100, 900, 241, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_5 = new QWidget(MessagingPage);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(1740, 10, 171, 1041));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        usersLabel = new QLabel(verticalLayoutWidget_5);
        usersLabel->setObjectName(QString::fromUtf8("usersLabel"));
        usersLabel->setFont(font);

        verticalLayout_5->addWidget(usersLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_5->addItem(horizontalSpacer_5);

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

        line_4 = new QFrame(MessagingPage);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(1721, 0, 20, 1061));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(MessagingPage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 82, 1041));
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

        line_2 = new QFrame(MessagingPage);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(90, 0, 21, 1061));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(MessagingPage);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(360, 10, 1361, 31));
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

        stackedWidget->addWidget(MessagingPage);
        SettingsPage = new QWidget();
        SettingsPage->setObjectName(QString::fromUtf8("SettingsPage"));
        label = new QLabel(SettingsPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(660, 10, 271, 41));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(false);
        font4.setWeight(50);
        label->setFont(font4);
        horizontalLayoutWidget_3 = new QWidget(SettingsPage);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(660, 60, 621, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(horizontalLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        hostEdit = new QLineEdit(horizontalLayoutWidget_3);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, hostEdit);

        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        portSpinBox = new QSpinBox(horizontalLayoutWidget_3);
        portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
        portSpinBox->setMaximum(99999);

        formLayout->setWidget(1, QFormLayout::FieldRole, portSpinBox);


        horizontalLayout_3->addLayout(formLayout);

        buttonConnect = new QPushButton(horizontalLayoutWidget_3);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));

        horizontalLayout_3->addWidget(buttonConnect);

        line_6 = new QFrame(SettingsPage);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(1280, 0, 21, 1061));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(SettingsPage);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(640, 0, 21, 1061));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_4 = new QWidget(SettingsPage);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(660, 1019, 621, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(horizontalLayoutWidget_4);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout_4->addWidget(backButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        stackedWidget->addWidget(SettingsPage);
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        sendButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        sendButton->setText(QApplication::translate("MainWindow", "Send", nullptr));
        profileButton->setText(QApplication::translate("MainWindow", "Profile", nullptr));
        settingsButton->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        groupName->setText(QApplication::translate("MainWindow", "SDI Group 30", nullptr));
        channelLabel_2->setText(QApplication::translate("MainWindow", "Channels", nullptr));
        channelDropDown->setItemText(0, QApplication::translate("MainWindow", "general", nullptr));
        channelDropDown->setItemText(1, QApplication::translate("MainWindow", "ideaboard", nullptr));
        channelDropDown->setItemText(2, QApplication::translate("MainWindow", "keydocuments", nullptr));
        channelDropDown->setItemText(3, QApplication::translate("MainWindow", "meetingschedule", nullptr));
        channelDropDown->setItemText(4, QApplication::translate("MainWindow", "pendingtasks", nullptr));

        messageLog->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        statusLabel->setText(QApplication::translate("MainWindow", "Status", nullptr));
        activeRadio->setText(QApplication::translate("MainWindow", "Active", nullptr));
        awayRadio->setText(QApplication::translate("MainWindow", "Away", nullptr));
        doNotDisturbRadio->setText(QApplication::translate("MainWindow", "Do Not Disturb", nullptr));
        invisibleRadio->setText(QApplication::translate("MainWindow", "Invisible", nullptr));
        usersLabel->setText(QApplication::translate("MainWindow", "Users", nullptr));

        const bool __sortingEnabled = userList->isSortingEnabled();
        userList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = userList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Online - 4", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = userList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "Jarad", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = userList->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "Hannah", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = userList->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "Hassaan", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = userList->item(5);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "Offline - 1", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = userList->item(6);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "Nick", nullptr));
        userList->setSortingEnabled(__sortingEnabled);

        homeButton->setText(QApplication::translate("MainWindow", "Home", nullptr));
        groupButton1->setText(QApplication::translate("MainWindow", "SDI", nullptr));
        groupButton2->setText(QApplication::translate("MainWindow", "PPM", nullptr));
        groupButton3->setText(QApplication::translate("MainWindow", "SE", nullptr));
        groupButton4->setText(QApplication::translate("MainWindow", "ML", nullptr));
        addNewGroupButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        channelLabel->setText(QApplication::translate("MainWindow", "general", nullptr));
        searchButton->setText(QApplication::translate("MainWindow", "Search", nullptr));
        label->setText(QApplication::translate("MainWindow", "Application Settings", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Host:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Port:", nullptr));
        buttonConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        backButton->setText(QApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
