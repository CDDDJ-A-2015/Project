/*
 * File:   main.cpp
 * Author: dm940
 *
 * Created on 21 March 2015, 3:34 PM
 */

#include <QApplication>
#include "Project.h"
#include "Home.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    Home a;
    a.show();
    return app.exec();
}
