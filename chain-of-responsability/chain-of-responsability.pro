TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        BaseValidator.cpp \
        HistoryValidator.cpp \
        NotEmptyValidator.cpp \
        RegexValidator.cpp \
        StringValidator.cpp \
        main.cpp

DISTFILES += \
    chain-of-responsability.pro.user

HEADERS += \
    BaseValidator.h \
    HistoryValidator.h \
    NotEmptyValidator.h \
    RegexValidator.h \
    StringValidator.h
