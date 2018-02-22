/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: ACER-Aspire
 *
 * Created on February 22, 2018, 10:52 AM
 */

#include <QApplication>
#include "MainEditorForm.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    MainEditorForm newMain;
    newMain.show();

    return app.exec();
}
