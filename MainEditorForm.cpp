/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   MainEditorForm.cpp
 * Author: ACER-Aspire
 *
 * Created on February 22, 2018, 10:57 AM
 */

#include "MainEditorForm.h"
#include "QFileDialog"
#include "QMessageBox"
#include "memory"
#include "unistd.h"
#include "sys/types.h"
#include "sys/stat.h"
#include <fcntl.h>

using std::unique_ptr;
const static int MAX_SIZE=500000;

MainEditorForm::MainEditorForm() {
    widget.setupUi(this);
}

MainEditorForm::~MainEditorForm() {
}

void MainEditorForm::onFileOpen(){
    
    QString fileName=QFileDialog::getOpenFileName(this,"open file");
    if(fileName==""){
        return;
    }
    int fd=::open(fileName.toStdString().c_str(),O_RDONLY);
    if(fd==-1){
        QMessageBox::critical(this,"Error","Can't open file.");
        return;
    }
    struct stat st;
    stat(fileName.toStdString().c_str(),&st);
    if(st.st_size>MAX_SIZE){
        QMessageBox::critical(this,"Error","This file is to big for this Editor");
        return;
    }
    unique_ptr<char>fileBuffer(new char[st.st_size]);
    ::read(fd,fileBuffer.get(),st.st_size);
    ::close(fd);
    widget.plainTextEdit->setPlainText(fileBuffer.get());
}