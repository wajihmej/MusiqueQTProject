QT       += core gui sql printsupport charts network multimedia serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adherent.cpp \
    admininterface.cpp \
    administrateurs.cpp \
    arduino.cpp \
    baha.cpp \
    connection.cpp \
    cours.cpp \
    enseignants.cpp \
    evenement.cpp \
    evenementinter.cpp \
    excel.cpp \
    groupe.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    notification.cpp \
    ramzi.cpp \
    scean.cpp \
    session.cpp \
    sessioninter.cpp \
    smtp.cpp \
    tableprinter.cpp

HEADERS += \
    adherent.h \
    admininterface.h \
    administrateurs.h \
    arduino.h \
    baha.h \
    connection.h \
    cours.h \
    enseignants.h \
    evenement.h \
    evenementinter.h \
    excel.h \
    groupe.h \
    login.h \
    mainwindow.h \
    notification.h \
    ramzi.h \
    scean.h \
    session.h \
    sessioninter.h \
    smtp.h \
    tableprinter.h

FORMS += \
    admininterface.ui \
    baha.ui \
    evenementinter.ui \
    login.ui \
    mainwindow.ui \
    ramzi.ui \
    sessioninter.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Projet2A.pro.user
