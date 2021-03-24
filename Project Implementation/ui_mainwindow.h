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
#include <QtWidgets/QListView>
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
    QWidget *LoginPage;
    QLabel *label_8;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout_2;
    QLabel *username;
    QLabel *password;
    QLineEdit *userEdit;
    QLineEdit *passEdit;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *loginButton;
    QPushButton *createAccButton;
    QWidget *SignupPage;
    QLabel *label_9;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout_3;
    QLabel *signupUsername;
    QLabel *signupPassword;
    QLineEdit *signupUserEdit;
    QLineEdit *signupPassEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *signupButton;
    QPushButton *signupBackButton;
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
    QPushButton *refreshButton;
    QFrame *line;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *roomLabel;
    QSpacerItem *horizontalSpacer_6;
    QLabel *channelLabel_3;
    QComboBox *roomDropDown;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *addRoomButton;
    QPushButton *deleteRoomButton;
    QSpacerItem *verticalSpacer_11;
    QLabel *channelLabel_2;
    QComboBox *channelDropDown;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addChannelButton;
    QPushButton *deleteChannelButton;
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
    QRadioButton *invisibleRadio;
    QRadioButton *doNotDisturbRadio;
    QSpacerItem *verticalSpacer;
    QFrame *line_5;
    QFrame *line_3;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *usersLabel;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *addUserButton;
    QPushButton *removeUserButton;
    QLabel *usersLabel_2;
    QListWidget *onlineUserList;
    QLabel *usersLabel_3;
    QListView *offlineUserList;
    QFrame *line_4;
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
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_8;
    QFrame *line_6;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1280, 701));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        label_8 = new QLabel(LoginPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(560, 150, 141, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label_8->setFont(font);
        verticalLayoutWidget_6 = new QWidget(LoginPage);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(480, 220, 301, 141));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        username = new QLabel(verticalLayoutWidget_6);
        username->setObjectName(QString::fromUtf8("username"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, username);

        password = new QLabel(verticalLayoutWidget_6);
        password->setObjectName(QString::fromUtf8("password"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, password);

        userEdit = new QLineEdit(verticalLayoutWidget_6);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, userEdit);

        passEdit = new QLineEdit(verticalLayoutWidget_6);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passEdit);


        verticalLayout_6->addLayout(formLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        loginButton = new QPushButton(verticalLayoutWidget_6);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        horizontalLayout_5->addWidget(loginButton);

        createAccButton = new QPushButton(verticalLayoutWidget_6);
        createAccButton->setObjectName(QString::fromUtf8("createAccButton"));

        horizontalLayout_5->addWidget(createAccButton);


        verticalLayout_6->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(LoginPage);
        SignupPage = new QWidget();
        SignupPage->setObjectName(QString::fromUtf8("SignupPage"));
        label_9 = new QLabel(SignupPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(540, 150, 181, 61));
        label_9->setFont(font);
        verticalLayoutWidget_7 = new QWidget(SignupPage);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(480, 220, 301, 141));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        signupUsername = new QLabel(verticalLayoutWidget_7);
        signupUsername->setObjectName(QString::fromUtf8("signupUsername"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, signupUsername);

        signupPassword = new QLabel(verticalLayoutWidget_7);
        signupPassword->setObjectName(QString::fromUtf8("signupPassword"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, signupPassword);

        signupUserEdit = new QLineEdit(verticalLayoutWidget_7);
        signupUserEdit->setObjectName(QString::fromUtf8("signupUserEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, signupUserEdit);

        signupPassEdit = new QLineEdit(verticalLayoutWidget_7);
        signupPassEdit->setObjectName(QString::fromUtf8("signupPassEdit"));
        signupPassEdit->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, signupPassEdit);


        verticalLayout_7->addLayout(formLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        signupButton = new QPushButton(verticalLayoutWidget_7);
        signupButton->setObjectName(QString::fromUtf8("signupButton"));

        horizontalLayout_6->addWidget(signupButton);

        signupBackButton = new QPushButton(verticalLayoutWidget_7);
        signupBackButton->setObjectName(QString::fromUtf8("signupBackButton"));

        horizontalLayout_6->addWidget(signupBackButton);


        verticalLayout_7->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(SignupPage);
        MessagingPage = new QWidget();
        MessagingPage->setObjectName(QString::fromUtf8("MessagingPage"));
        horizontalLayoutWidget_2 = new QWidget(MessagingPage);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(250, 640, 791, 51));
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
        verticalLayoutWidget_3->setGeometry(QRect(10, 560, 101, 131));
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

        refreshButton = new QPushButton(verticalLayoutWidget_3);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        verticalLayout_3->addWidget(refreshButton);

        line = new QFrame(MessagingPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(230, 0, 21, 701));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_2 = new QWidget(MessagingPage);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 223, 531));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        roomLabel = new QLabel(verticalLayoutWidget_2);
        roomLabel->setObjectName(QString::fromUtf8("roomLabel"));
        QFont font1;
        font1.setPointSize(14);
        roomLabel->setFont(font1);

        verticalLayout_2->addWidget(roomLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_6);

        channelLabel_3 = new QLabel(verticalLayoutWidget_2);
        channelLabel_3->setObjectName(QString::fromUtf8("channelLabel_3"));

        verticalLayout_2->addWidget(channelLabel_3);

        roomDropDown = new QComboBox(verticalLayoutWidget_2);
        roomDropDown->setObjectName(QString::fromUtf8("roomDropDown"));

        verticalLayout_2->addWidget(roomDropDown);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        addRoomButton = new QPushButton(verticalLayoutWidget_2);
        addRoomButton->setObjectName(QString::fromUtf8("addRoomButton"));

        horizontalLayout_8->addWidget(addRoomButton);

        deleteRoomButton = new QPushButton(verticalLayoutWidget_2);
        deleteRoomButton->setObjectName(QString::fromUtf8("deleteRoomButton"));

        horizontalLayout_8->addWidget(deleteRoomButton);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_11);

        channelLabel_2 = new QLabel(verticalLayoutWidget_2);
        channelLabel_2->setObjectName(QString::fromUtf8("channelLabel_2"));

        verticalLayout_2->addWidget(channelLabel_2);

        channelDropDown = new QComboBox(verticalLayoutWidget_2);
        channelDropDown->setObjectName(QString::fromUtf8("channelDropDown"));

        verticalLayout_2->addWidget(channelDropDown);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        addChannelButton = new QPushButton(verticalLayoutWidget_2);
        addChannelButton->setObjectName(QString::fromUtf8("addChannelButton"));

        horizontalLayout_7->addWidget(addChannelButton);

        deleteChannelButton = new QPushButton(verticalLayoutWidget_2);
        deleteChannelButton->setObjectName(QString::fromUtf8("deleteChannelButton"));

        horizontalLayout_7->addWidget(deleteChannelButton);


        verticalLayout_2->addLayout(horizontalLayout_7);

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
        messageLog->setGeometry(QRect(250, 60, 791, 571));
        verticalLayoutWidget_4 = new QWidget(MessagingPage);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(120, 560, 111, 135));
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

        invisibleRadio = new QRadioButton(verticalLayoutWidget_4);
        invisibleRadio->setObjectName(QString::fromUtf8("invisibleRadio"));

        verticalLayout_4->addWidget(invisibleRadio);

        doNotDisturbRadio = new QRadioButton(verticalLayoutWidget_4);
        doNotDisturbRadio->setObjectName(QString::fromUtf8("doNotDisturbRadio"));

        verticalLayout_4->addWidget(doNotDisturbRadio);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        line_5 = new QFrame(MessagingPage);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 40, 1281, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(MessagingPage);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 540, 241, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_5 = new QWidget(MessagingPage);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(1060, 10, 211, 681));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        usersLabel = new QLabel(verticalLayoutWidget_5);
        usersLabel->setObjectName(QString::fromUtf8("usersLabel"));
        usersLabel->setFont(font1);

        verticalLayout_5->addWidget(usersLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_5->addItem(horizontalSpacer_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        addUserButton = new QPushButton(verticalLayoutWidget_5);
        addUserButton->setObjectName(QString::fromUtf8("addUserButton"));

        horizontalLayout_9->addWidget(addUserButton);

        removeUserButton = new QPushButton(verticalLayoutWidget_5);
        removeUserButton->setObjectName(QString::fromUtf8("removeUserButton"));

        horizontalLayout_9->addWidget(removeUserButton);


        verticalLayout_5->addLayout(horizontalLayout_9);

        usersLabel_2 = new QLabel(verticalLayoutWidget_5);
        usersLabel_2->setObjectName(QString::fromUtf8("usersLabel_2"));
        usersLabel_2->setFont(font1);

        verticalLayout_5->addWidget(usersLabel_2);

        onlineUserList = new QListWidget(verticalLayoutWidget_5);
        onlineUserList->setObjectName(QString::fromUtf8("onlineUserList"));
        onlineUserList->setEnabled(true);
        QFont font2;
        font2.setPointSize(8);
        onlineUserList->setFont(font2);

        verticalLayout_5->addWidget(onlineUserList);

        usersLabel_3 = new QLabel(verticalLayoutWidget_5);
        usersLabel_3->setObjectName(QString::fromUtf8("usersLabel_3"));
        usersLabel_3->setFont(font1);

        verticalLayout_5->addWidget(usersLabel_3);

        offlineUserList = new QListView(verticalLayoutWidget_5);
        offlineUserList->setObjectName(QString::fromUtf8("offlineUserList"));

        verticalLayout_5->addWidget(offlineUserList);

        line_4 = new QFrame(MessagingPage);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(1040, 0, 20, 701));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(MessagingPage);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(250, 10, 791, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        channelLabel = new QLabel(horizontalLayoutWidget);
        channelLabel->setObjectName(QString::fromUtf8("channelLabel"));
        channelLabel->setFont(font1);

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
        label->setGeometry(QRect(10, 0, 271, 41));
        label->setFont(font);
        horizontalLayoutWidget_3 = new QWidget(SettingsPage);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 60, 351, 61));
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
        portSpinBox->setValue(1883);

        formLayout->setWidget(1, QFormLayout::FieldRole, portSpinBox);


        horizontalLayout_3->addLayout(formLayout);

        buttonConnect = new QPushButton(horizontalLayoutWidget_3);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));

        horizontalLayout_3->addWidget(buttonConnect);

        horizontalLayoutWidget_4 = new QWidget(SettingsPage);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 660, 1261, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(horizontalLayoutWidget_4);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout_4->addWidget(backButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        line_6 = new QFrame(SettingsPage);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, 40, 1271, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(SettingsPage);
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        sendButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600;\">Login</span></p></body></html>", nullptr));
        username->setText(QApplication::translate("MainWindow", "Username", nullptr));
        password->setText(QApplication::translate("MainWindow", "Password", nullptr));
        passEdit->setInputMask(QString());
        loginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        createAccButton->setText(QApplication::translate("MainWindow", "Create Account", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600;\">Sign Up</span><br/></p></body></html>", nullptr));
        signupUsername->setText(QApplication::translate("MainWindow", "Username", nullptr));
        signupPassword->setText(QApplication::translate("MainWindow", "Password", nullptr));
        signupButton->setText(QApplication::translate("MainWindow", "Sign Up", nullptr));
        signupBackButton->setText(QApplication::translate("MainWindow", "Back", nullptr));
        sendButton->setText(QApplication::translate("MainWindow", "Send", nullptr));
        profileButton->setText(QApplication::translate("MainWindow", "Profile", nullptr));
        settingsButton->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        refreshButton->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        roomLabel->setText(QApplication::translate("MainWindow", "no-group-selected", nullptr));
        channelLabel_3->setText(QApplication::translate("MainWindow", "Groups", nullptr));
        addRoomButton->setText(QApplication::translate("MainWindow", "Add Room", nullptr));
        deleteRoomButton->setText(QApplication::translate("MainWindow", "Delete Room", nullptr));
        channelLabel_2->setText(QApplication::translate("MainWindow", "Channels", nullptr));
        addChannelButton->setText(QApplication::translate("MainWindow", "Add Channel", nullptr));
        deleteChannelButton->setText(QApplication::translate("MainWindow", "Delete Channel", nullptr));
        messageLog->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        statusLabel->setText(QApplication::translate("MainWindow", "Status", nullptr));
        activeRadio->setText(QApplication::translate("MainWindow", "Active", nullptr));
        invisibleRadio->setText(QApplication::translate("MainWindow", "Invisible", nullptr));
        doNotDisturbRadio->setText(QApplication::translate("MainWindow", "Busy", nullptr));
        usersLabel->setText(QApplication::translate("MainWindow", "Users", nullptr));
        addUserButton->setText(QApplication::translate("MainWindow", "Add User", nullptr));
        removeUserButton->setText(QApplication::translate("MainWindow", "Remove User", nullptr));
        usersLabel_2->setText(QApplication::translate("MainWindow", "Online", nullptr));
        usersLabel_3->setText(QApplication::translate("MainWindow", "Offline", nullptr));
        channelLabel->setText(QApplication::translate("MainWindow", "not-connected", nullptr));
        searchButton->setText(QApplication::translate("MainWindow", "Search", nullptr));
        label->setText(QApplication::translate("MainWindow", "Application Settings", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Host:", nullptr));
        hostEdit->setText(QApplication::translate("MainWindow", "127.0.0.1", nullptr));
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
