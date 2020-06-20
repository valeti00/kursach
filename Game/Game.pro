QT       += core gui network multimedia

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
    anotherwindow.cpp \
    good1.cpp \
    good2.cpp \
    konec.cpp \
    levo.cpp \
    lovushka1.cpp \
    main.cpp \
    mainwindow.cpp \
    oshibka.cpp \
    pravo.cpp \
    stena1.cpp \
    tupic4.cpp \
    typic2.cpp \
    typic3.cpp \
    user.cpp \
    vpered.cpp \
    vpered2.cpp \
    vpered3.cpp \
    window3.cpp \
    zagadka1.cpp \
    zagadka2.cpp \
    zagadka3.cpp

HEADERS += \
    anotherwindow.h \
    good1.h \
    good2.h \
    konec.h \
    levo.h \
    lovushka1.h \
    mainwindow.h \
    oshibka.h \
    pravo.h \
    stena1.h \
    tupic4.h \
    typic2.h \
    typic3.h \
    user.h \
    vpered.h \
    vpered2.h \
    vpered3.h \
    window3.h \
    zagadka1.h \
    zagadka2.h \
    zagadka3.h

FORMS += \
    anotherwindow.ui \
    good1.ui \
    good2.ui \
    konec.ui \
    levo.ui \
    lovushka1.ui \
    mainwindow.ui \
    oshibka.ui \
    pravo.ui \
    stena1.ui \
    tupic4.ui \
    typic2.ui \
    typic3.ui \
    user.ui \
    vpered.ui \
    vpered2.ui \
    vpered3.ui \
    window3.ui \
    zagadka1.ui \
    zagadka2.ui \
    zagadka3.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    android/AndroidManifest.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew \
    android/gradlew.bat \
    android/res/values/libs.xml

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

RESOURCES += \
    res.qrc
