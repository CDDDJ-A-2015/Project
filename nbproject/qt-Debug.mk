#############################################################################
# Makefile for building: dist/Debug/GNU-Linux-x86/311
# Generated by qmake (2.01a) (Qt 4.8.6) on: Wed May 27 00:35:02 2015
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -Inbproject -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4 -I/usr/X11R6/include -I. -I. -Inbproject -I.
LINK          = g++
LFLAGS        = -m64
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -L/usr/X11R6/lib64 -lGLU -lQtOpenGL -lQtGui -lQtCore -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = build/Debug/GNU-Linux-x86/

####### Files

SOURCES       = Coco1.cpp \
		Coco2.cpp \
		EditProject.cpp \
		EditTask.cpp \
		EditUser.cpp \
		FuncPoints.cpp \
		GetInt.cpp \
		Home.cpp \
		Login.cpp \
		Project.cpp \
		Search.cpp \
		StringDialog.cpp \
		Task.cpp \
		TeamMembers.cpp \
		UserProfile.cpp \
		displayGraphics.cpp \
		main.cpp \
		searchResults.cpp moc_Coco1.cpp \
		moc_Coco2.cpp \
		moc_EditProject.cpp \
		moc_EditTask.cpp \
		moc_EditUser.cpp \
		moc_FuncPoints.cpp \
		moc_GetInt.cpp \
		moc_Home.cpp \
		moc_Login.cpp \
		moc_Project.cpp \
		moc_Search.cpp \
		moc_StringDialog.cpp \
		moc_Task.cpp \
		moc_TeamMembers.cpp \
		moc_UserProfile.cpp \
		moc_searchResults.cpp \
		qrc_Images.cpp
OBJECTS       = build/Debug/GNU-Linux-x86/Coco1.o \
		build/Debug/GNU-Linux-x86/Coco2.o \
		build/Debug/GNU-Linux-x86/EditProject.o \
		build/Debug/GNU-Linux-x86/EditTask.o \
		build/Debug/GNU-Linux-x86/EditUser.o \
		build/Debug/GNU-Linux-x86/FuncPoints.o \
		build/Debug/GNU-Linux-x86/GetInt.o \
		build/Debug/GNU-Linux-x86/Home.o \
		build/Debug/GNU-Linux-x86/Login.o \
		build/Debug/GNU-Linux-x86/Project.o \
		build/Debug/GNU-Linux-x86/Search.o \
		build/Debug/GNU-Linux-x86/StringDialog.o \
		build/Debug/GNU-Linux-x86/Task.o \
		build/Debug/GNU-Linux-x86/TeamMembers.o \
		build/Debug/GNU-Linux-x86/UserProfile.o \
		build/Debug/GNU-Linux-x86/displayGraphics.o \
		build/Debug/GNU-Linux-x86/main.o \
		build/Debug/GNU-Linux-x86/searchResults.o \
		build/Debug/GNU-Linux-x86/moc_Coco1.o \
		build/Debug/GNU-Linux-x86/moc_Coco2.o \
		build/Debug/GNU-Linux-x86/moc_EditProject.o \
		build/Debug/GNU-Linux-x86/moc_EditTask.o \
		build/Debug/GNU-Linux-x86/moc_EditUser.o \
		build/Debug/GNU-Linux-x86/moc_FuncPoints.o \
		build/Debug/GNU-Linux-x86/moc_GetInt.o \
		build/Debug/GNU-Linux-x86/moc_Home.o \
		build/Debug/GNU-Linux-x86/moc_Login.o \
		build/Debug/GNU-Linux-x86/moc_Project.o \
		build/Debug/GNU-Linux-x86/moc_Search.o \
		build/Debug/GNU-Linux-x86/moc_StringDialog.o \
		build/Debug/GNU-Linux-x86/moc_Task.o \
		build/Debug/GNU-Linux-x86/moc_TeamMembers.o \
		build/Debug/GNU-Linux-x86/moc_UserProfile.o \
		build/Debug/GNU-Linux-x86/moc_searchResults.o \
		build/Debug/GNU-Linux-x86/qrc_Images.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		nbproject/qt-Debug.pro
QMAKE_TARGET  = 311
DESTDIR       = dist/Debug/GNU-Linux-x86/
TARGET        = dist/Debug/GNU-Linux-x86/311

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: qttmp-Debug.mk $(TARGET)

$(TARGET): ui_Coco1.h ui_Coco2.h ui_EditProject.h ui_EditTask.h ui_EditUser.h ui_FuncPoints.h ui_GetInt.h ui_Home.h ui_Login.h ui_Project.h ui_Search.h ui_StringDialog.h ui_Task.h ui_TeamMembers.h ui_UserProfile.h ui_displayGraphics.h ui_searchResults.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) dist/Debug/GNU-Linux-x86/ || $(MKDIR) dist/Debug/GNU-Linux-x86/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

qttmp-Debug.mk: nbproject/qt-Debug.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtOpenGL.prl \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/opengl.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtOpenGL.prl:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist: 
	@$(CHK_DIR_EXISTS) build/Debug/GNU-Linux-x86/3111.0.0 || $(MKDIR) build/Debug/GNU-Linux-x86/3111.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) build/Debug/GNU-Linux-x86/3111.0.0/ && $(COPY_FILE) --parents Client_Side.h Coco1.h Coco2.h EditProject.h EditTask.h EditUser.h FuncPoints.h GetInt.h Home.h Login.h Packets.h Project.h Search.h StringDialog.h Task.h TeamMembers.h UserProfile.h displayGraphics.h searchResults.h build/Debug/GNU-Linux-x86/3111.0.0/ && $(COPY_FILE) --parents Images.qrc build/Debug/GNU-Linux-x86/3111.0.0/ && $(COPY_FILE) --parents Coco1.cpp Coco2.cpp EditProject.cpp EditTask.cpp EditUser.cpp FuncPoints.cpp GetInt.cpp Home.cpp Login.cpp Project.cpp Search.cpp StringDialog.cpp Task.cpp TeamMembers.cpp UserProfile.cpp displayGraphics.cpp main.cpp searchResults.cpp build/Debug/GNU-Linux-x86/3111.0.0/ && $(COPY_FILE) --parents Coco1.ui Coco2.ui EditProject.ui EditTask.ui EditUser.ui FuncPoints.ui GetInt.ui Home.ui Login.ui Project.ui Search.ui StringDialog.ui Task.ui TeamMembers.ui UserProfile.ui displayGraphics.ui searchResults.ui build/Debug/GNU-Linux-x86/3111.0.0/ && (cd `dirname build/Debug/GNU-Linux-x86/3111.0.0` && $(TAR) 3111.0.0.tar 3111.0.0 && $(COMPRESS) 3111.0.0.tar) && $(MOVE) `dirname build/Debug/GNU-Linux-x86/3111.0.0`/3111.0.0.tar.gz . && $(DEL_FILE) -r build/Debug/GNU-Linux-x86/3111.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) qttmp-Debug.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_Coco1.cpp moc_Coco2.cpp moc_EditProject.cpp moc_EditTask.cpp moc_EditUser.cpp moc_FuncPoints.cpp moc_GetInt.cpp moc_Home.cpp moc_Login.cpp moc_Project.cpp moc_Search.cpp moc_StringDialog.cpp moc_Task.cpp moc_TeamMembers.cpp moc_UserProfile.cpp moc_searchResults.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_Coco1.cpp moc_Coco2.cpp moc_EditProject.cpp moc_EditTask.cpp moc_EditUser.cpp moc_FuncPoints.cpp moc_GetInt.cpp moc_Home.cpp moc_Login.cpp moc_Project.cpp moc_Search.cpp moc_StringDialog.cpp moc_Task.cpp moc_TeamMembers.cpp moc_UserProfile.cpp moc_searchResults.cpp
moc_Coco1.cpp: ui_Coco1.h \
		Coco1.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Coco1.h -o moc_Coco1.cpp

moc_Coco2.cpp: ui_Coco2.h \
		Coco2.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Coco2.h -o moc_Coco2.cpp

moc_EditProject.cpp: ui_EditProject.h \
		Packets.h \
		Client_Side.h \
		EditProject.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) EditProject.h -o moc_EditProject.cpp

moc_EditTask.cpp: ui_EditTask.h \
		Project.h \
		ui_Project.h \
		EditProject.h \
		ui_EditProject.h \
		Packets.h \
		Client_Side.h \
		StringDialog.h \
		ui_StringDialog.h \
		Task.h \
		ui_Task.h \
		displayGraphics.h \
		EditTask.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) EditTask.h -o moc_EditTask.cpp

moc_EditUser.cpp: Packets.h \
		Client_Side.h \
		ui_EditUser.h \
		EditUser.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) EditUser.h -o moc_EditUser.cpp

moc_FuncPoints.cpp: ui_FuncPoints.h \
		FuncPoints.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) FuncPoints.h -o moc_FuncPoints.cpp

moc_GetInt.cpp: ui_GetInt.h \
		GetInt.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) GetInt.h -o moc_GetInt.cpp

moc_Home.cpp: ui_Home.h \
		Client_Side.h \
		Packets.h \
		Home.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Home.h -o moc_Home.cpp

moc_Login.cpp: ui_Login.h \
		Packets.h \
		Login.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Login.h -o moc_Login.cpp

moc_Project.cpp: ui_Project.h \
		EditProject.h \
		ui_EditProject.h \
		Packets.h \
		Client_Side.h \
		StringDialog.h \
		ui_StringDialog.h \
		Task.h \
		ui_Task.h \
		displayGraphics.h \
		Project.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Project.h -o moc_Project.cpp

moc_Search.cpp: ui_Search.h \
		Search.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Search.h -o moc_Search.cpp

moc_StringDialog.cpp: ui_StringDialog.h \
		StringDialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) StringDialog.h -o moc_StringDialog.cpp

moc_Task.cpp: ui_Task.h \
		Client_Side.h \
		Task.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Task.h -o moc_Task.cpp

moc_TeamMembers.cpp: ui_TeamMembers.h \
		Packets.h \
		Client_Side.h \
		TeamMembers.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) TeamMembers.h -o moc_TeamMembers.cpp

moc_UserProfile.cpp: ui_UserProfile.h \
		Client_Side.h \
		Packets.h \
		UserProfile.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) UserProfile.h -o moc_UserProfile.cpp

moc_searchResults.cpp: ui_searchResults.h \
		searchResults.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) searchResults.h -o moc_searchResults.cpp

compiler_rcc_make_all: qrc_Images.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_Images.cpp
qrc_Images.cpp: Images.qrc
	/usr/lib/x86_64-linux-gnu/qt4/bin/rcc -name Images Images.qrc -o qrc_Images.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_Coco1.h ui_Coco2.h ui_EditProject.h ui_EditTask.h ui_EditUser.h ui_FuncPoints.h ui_GetInt.h ui_Home.h ui_Login.h ui_Project.h ui_Search.h ui_StringDialog.h ui_Task.h ui_TeamMembers.h ui_UserProfile.h ui_displayGraphics.h ui_searchResults.h
compiler_uic_clean:
	-$(DEL_FILE) ui_Coco1.h ui_Coco2.h ui_EditProject.h ui_EditTask.h ui_EditUser.h ui_FuncPoints.h ui_GetInt.h ui_Home.h ui_Login.h ui_Project.h ui_Search.h ui_StringDialog.h ui_Task.h ui_TeamMembers.h ui_UserProfile.h ui_displayGraphics.h ui_searchResults.h
ui_Coco1.h: Coco1.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic Coco1.ui -o ui_Coco1.h

ui_Coco2.h: Coco2.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic Coco2.ui -o ui_Coco2.h

ui_EditProject.h: EditProject.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic EditProject.ui -o ui_EditProject.h

ui_EditTask.h: EditTask.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic EditTask.ui -o ui_EditTask.h

ui_EditUser.h: EditUser.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic EditUser.ui -o ui_EditUser.h

ui_FuncPoints.h: FuncPoints.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic FuncPoints.ui -o ui_FuncPoints.h

ui_GetInt.h: GetInt.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic GetInt.ui -o ui_GetInt.h

ui_Home.h: Home.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic Home.ui -o ui_Home.h

ui_Login.h: Login.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic Login.ui -o ui_Login.h

ui_Project.h: Project.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic Project.ui -o ui_Project.h

ui_Search.h: Search.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic Search.ui -o ui_Search.h

ui_StringDialog.h: StringDialog.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic StringDialog.ui -o ui_StringDialog.h

ui_Task.h: Task.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic Task.ui -o ui_Task.h

ui_TeamMembers.h: TeamMembers.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic TeamMembers.ui -o ui_TeamMembers.h

ui_UserProfile.h: UserProfile.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic UserProfile.ui -o ui_UserProfile.h

ui_displayGraphics.h: displayGraphics.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic displayGraphics.ui -o ui_displayGraphics.h

ui_searchResults.h: searchResults.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic searchResults.ui -o ui_searchResults.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

build/Debug/GNU-Linux-x86/Coco1.o: Coco1.cpp Coco1.h \
		ui_Coco1.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Coco1.o Coco1.cpp

build/Debug/GNU-Linux-x86/Coco2.o: Coco2.cpp Coco2.h \
		ui_Coco2.h \
		Coco1.h \
		ui_Coco1.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Coco2.o Coco2.cpp

build/Debug/GNU-Linux-x86/EditProject.o: EditProject.cpp EditProject.h \
		ui_EditProject.h \
		Packets.h \
		Client_Side.h \
		Project.h \
		ui_Project.h \
		StringDialog.h \
		ui_StringDialog.h \
		Task.h \
		ui_Task.h \
		displayGraphics.h \
		Coco1.h \
		ui_Coco1.h \
		Coco2.h \
		ui_Coco2.h \
		FuncPoints.h \
		ui_FuncPoints.h \
		TeamMembers.h \
		ui_TeamMembers.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/EditProject.o EditProject.cpp

build/Debug/GNU-Linux-x86/EditTask.o: EditTask.cpp Packets.h \
		Client_Side.h \
		EditTask.h \
		ui_EditTask.h \
		Project.h \
		ui_Project.h \
		EditProject.h \
		ui_EditProject.h \
		StringDialog.h \
		ui_StringDialog.h \
		Task.h \
		ui_Task.h \
		displayGraphics.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/EditTask.o EditTask.cpp

build/Debug/GNU-Linux-x86/EditUser.o: EditUser.cpp EditUser.h \
		Packets.h \
		Client_Side.h \
		ui_EditUser.h \
		StringDialog.h \
		ui_StringDialog.h \
		UserProfile.h \
		ui_UserProfile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/EditUser.o EditUser.cpp

build/Debug/GNU-Linux-x86/FuncPoints.o: FuncPoints.cpp FuncPoints.h \
		ui_FuncPoints.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/FuncPoints.o FuncPoints.cpp

build/Debug/GNU-Linux-x86/GetInt.o: GetInt.cpp GetInt.h \
		ui_GetInt.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/GetInt.o GetInt.cpp

build/Debug/GNU-Linux-x86/Home.o: Home.cpp Home.h \
		ui_Home.h \
		Client_Side.h \
		Packets.h \
		UserProfile.h \
		ui_UserProfile.h \
		Project.h \
		ui_Project.h \
		EditProject.h \
		ui_EditProject.h \
		StringDialog.h \
		ui_StringDialog.h \
		Task.h \
		ui_Task.h \
		displayGraphics.h \
		Login.h \
		ui_Login.h \
		Search.h \
		ui_Search.h \
		EditUser.h \
		ui_EditUser.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Home.o Home.cpp

build/Debug/GNU-Linux-x86/Login.o: Login.cpp Login.h \
		ui_Login.h \
		Packets.h \
		Home.h \
		ui_Home.h \
		Client_Side.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Login.o Login.cpp

build/Debug/GNU-Linux-x86/Project.o: Project.cpp Project.h \
		ui_Project.h \
		EditProject.h \
		ui_EditProject.h \
		Packets.h \
		Client_Side.h \
		StringDialog.h \
		ui_StringDialog.h \
		Task.h \
		ui_Task.h \
		displayGraphics.h \
		EditTask.h \
		ui_EditTask.h \
		TeamMembers.h \
		ui_TeamMembers.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Project.o Project.cpp

build/Debug/GNU-Linux-x86/Search.o: Search.cpp Search.h \
		ui_Search.h \
		EditUser.h \
		Packets.h \
		Client_Side.h \
		ui_EditUser.h \
		searchResults.h \
		ui_searchResults.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Search.o Search.cpp

build/Debug/GNU-Linux-x86/StringDialog.o: StringDialog.cpp StringDialog.h \
		ui_StringDialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/StringDialog.o StringDialog.cpp

build/Debug/GNU-Linux-x86/Task.o: Task.cpp Task.h \
		ui_Task.h \
		Client_Side.h \
		StringDialog.h \
		ui_StringDialog.h \
		EditTask.h \
		ui_EditTask.h \
		Project.h \
		ui_Project.h \
		EditProject.h \
		ui_EditProject.h \
		Packets.h \
		displayGraphics.h \
		TeamMembers.h \
		ui_TeamMembers.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Task.o Task.cpp

build/Debug/GNU-Linux-x86/TeamMembers.o: TeamMembers.cpp TeamMembers.h \
		ui_TeamMembers.h \
		Packets.h \
		Client_Side.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/TeamMembers.o TeamMembers.cpp

build/Debug/GNU-Linux-x86/UserProfile.o: UserProfile.cpp UserProfile.h \
		ui_UserProfile.h \
		Client_Side.h \
		Packets.h \
		EditUser.h \
		ui_EditUser.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/UserProfile.o UserProfile.cpp

build/Debug/GNU-Linux-x86/displayGraphics.o: displayGraphics.cpp displayGraphics.h \
		Client_Side.h \
		Packets.h \
		GetInt.h \
		ui_GetInt.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/displayGraphics.o displayGraphics.cpp

build/Debug/GNU-Linux-x86/main.o: main.cpp Project.h \
		ui_Project.h \
		EditProject.h \
		ui_EditProject.h \
		Packets.h \
		Client_Side.h \
		StringDialog.h \
		ui_StringDialog.h \
		Task.h \
		ui_Task.h \
		displayGraphics.h \
		Home.h \
		ui_Home.h \
		Login.h \
		ui_Login.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/main.o main.cpp

build/Debug/GNU-Linux-x86/searchResults.o: searchResults.cpp searchResults.h \
		ui_searchResults.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/searchResults.o searchResults.cpp

build/Debug/GNU-Linux-x86/moc_Coco1.o: moc_Coco1.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Coco1.o moc_Coco1.cpp

build/Debug/GNU-Linux-x86/moc_Coco2.o: moc_Coco2.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Coco2.o moc_Coco2.cpp

build/Debug/GNU-Linux-x86/moc_EditProject.o: moc_EditProject.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_EditProject.o moc_EditProject.cpp

build/Debug/GNU-Linux-x86/moc_EditTask.o: moc_EditTask.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_EditTask.o moc_EditTask.cpp

build/Debug/GNU-Linux-x86/moc_EditUser.o: moc_EditUser.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_EditUser.o moc_EditUser.cpp

build/Debug/GNU-Linux-x86/moc_FuncPoints.o: moc_FuncPoints.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_FuncPoints.o moc_FuncPoints.cpp

build/Debug/GNU-Linux-x86/moc_GetInt.o: moc_GetInt.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_GetInt.o moc_GetInt.cpp

build/Debug/GNU-Linux-x86/moc_Home.o: moc_Home.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Home.o moc_Home.cpp

build/Debug/GNU-Linux-x86/moc_Login.o: moc_Login.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Login.o moc_Login.cpp

build/Debug/GNU-Linux-x86/moc_Project.o: moc_Project.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Project.o moc_Project.cpp

build/Debug/GNU-Linux-x86/moc_Search.o: moc_Search.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Search.o moc_Search.cpp

build/Debug/GNU-Linux-x86/moc_StringDialog.o: moc_StringDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_StringDialog.o moc_StringDialog.cpp

build/Debug/GNU-Linux-x86/moc_Task.o: moc_Task.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Task.o moc_Task.cpp

build/Debug/GNU-Linux-x86/moc_TeamMembers.o: moc_TeamMembers.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_TeamMembers.o moc_TeamMembers.cpp

build/Debug/GNU-Linux-x86/moc_UserProfile.o: moc_UserProfile.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_UserProfile.o moc_UserProfile.cpp

build/Debug/GNU-Linux-x86/moc_searchResults.o: moc_searchResults.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_searchResults.o moc_searchResults.cpp

build/Debug/GNU-Linux-x86/qrc_Images.o: qrc_Images.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/qrc_Images.o qrc_Images.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

