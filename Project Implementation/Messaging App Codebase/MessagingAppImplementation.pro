QT       += core gui network mqtt
QT += testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/admin.cpp \
    src/channel.cpp \
    src/image.cpp \
    src/moderator.cpp \
    src/room.cpp \
    src/message.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/media.cpp \
    src/user.cpp \
    src/video.cpp \
    tests/unitTests.cpp

HEADERS += \
    headers/admin.h \
    headers/channel.h \
    headers/consts.h \
    headers/mainwindow.h \
    headers/media.h \
    headers/image.h \
    headers/message.h \
    headers/moderator.h \
    headers/room.h \
    headers/unitTests.h \
    headers/user.h \
    headers/video.h

FORMS += \
    forms/mainwindow.ui

INCLUDEPATH += headers/

LIBS += -L/usr/include/ -lcryptopp

# Default rules for deployment.
OBJECTS_DIR = $$_PRO_FILE_PWD_/bin/
DESTDIR = $$_PRO_FILE_PWD_/bin/
TARGET = MessagingApp
