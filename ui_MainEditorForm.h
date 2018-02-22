/********************************************************************************
** Form generated from reading UI file 'MainEditorForm.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINEDITORFORM_H
#define UI_MAINEDITORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainEditorForm
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionAbout_us;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainEditorForm)
    {
        if (MainEditorForm->objectName().isEmpty())
            MainEditorForm->setObjectName(QStringLiteral("MainEditorForm"));
        MainEditorForm->resize(800, 600);
        actionNew = new QAction(MainEditorForm);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(MainEditorForm);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainEditorForm);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_as = new QAction(MainEditorForm);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionExit = new QAction(MainEditorForm);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionCut = new QAction(MainEditorForm);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(MainEditorForm);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainEditorForm);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionAbout_us = new QAction(MainEditorForm);
        actionAbout_us->setObjectName(QStringLiteral("actionAbout_us"));
        centralwidget = new QWidget(MainEditorForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        MainEditorForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainEditorForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainEditorForm->setMenuBar(menubar);
        statusbar = new QStatusBar(MainEditorForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainEditorForm->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuHelp->addAction(actionAbout_us);

        retranslateUi(MainEditorForm);
        QObject::connect(actionExit, SIGNAL(triggered()), MainEditorForm, SLOT(close()));
        QObject::connect(actionOpen, SIGNAL(triggered()), MainEditorForm, SLOT(onFileOpen()));

        QMetaObject::connectSlotsByName(MainEditorForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainEditorForm)
    {
        MainEditorForm->setWindowTitle(QApplication::translate("MainEditorForm", "MainEditorForm", 0));
        actionNew->setText(QApplication::translate("MainEditorForm", "New", 0));
        actionOpen->setText(QApplication::translate("MainEditorForm", "Open", 0));
        actionSave->setText(QApplication::translate("MainEditorForm", "Save", 0));
        actionSave_as->setText(QApplication::translate("MainEditorForm", "Save as", 0));
        actionExit->setText(QApplication::translate("MainEditorForm", "Exit", 0));
        actionCut->setText(QApplication::translate("MainEditorForm", "Cut", 0));
        actionCopy->setText(QApplication::translate("MainEditorForm", "Copy", 0));
        actionPaste->setText(QApplication::translate("MainEditorForm", "Paste", 0));
        actionAbout_us->setText(QApplication::translate("MainEditorForm", "About us", 0));
        menuFile->setTitle(QApplication::translate("MainEditorForm", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainEditorForm", "Edit", 0));
        menuHelp->setTitle(QApplication::translate("MainEditorForm", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainEditorForm: public Ui_MainEditorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINEDITORFORM_H
