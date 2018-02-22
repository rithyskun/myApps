/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MainEditorForm.h
 * Author: ACER-Aspire
 *
 * Created on February 22, 2018, 10:57 AM
 */

#ifndef _MAINEDITORFORM_H
#define _MAINEDITORFORM_H

#include "ui_MainEditorForm.h"

class MainEditorForm : public QMainWindow {
    Q_OBJECT
public:
    MainEditorForm();
    virtual ~MainEditorForm();
private:
    Ui::MainEditorForm widget;
    private slots:
        void onFileOpen();
        
};

#endif /* _MAINEDITORFORM_H */
