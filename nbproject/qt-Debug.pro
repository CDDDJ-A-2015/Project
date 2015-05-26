# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = 311
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets opengl
SOURCES += Coco1.cpp Coco2.cpp EditProject.cpp EditTask.cpp EditUser.cpp FuncPoints.cpp GetInt.cpp Home.cpp Login.cpp Project.cpp Search.cpp StringDialog.cpp Task.cpp TeamMembers.cpp UserProfile.cpp displayGraphics.cpp main.cpp searchResults.cpp
HEADERS += Client_Side.h Coco1.h Coco2.h EditProject.h EditTask.h EditUser.h FuncPoints.h GetInt.h Home.h Login.h Packets.h Project.h Search.h StringDialog.h Task.h TeamMembers.h UserProfile.h displayGraphics.h searchResults.h
FORMS += Coco1.ui Coco2.ui EditProject.ui EditTask.ui EditUser.ui FuncPoints.ui GetInt.ui Home.ui Login.ui Project.ui Search.ui StringDialog.ui Task.ui TeamMembers.ui UserProfile.ui displayGraphics.ui searchResults.ui
RESOURCES += Images.qrc
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += -lGL -lGLU -lGLU  
