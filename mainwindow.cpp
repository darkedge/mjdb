#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addfield.h"

#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionLoad_File_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
             tr("Open File"), "/home", tr("MJDB Ascii Files (*.mja)"));
}

void MainWindow::on_actionSave_As_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "/home/untitled.mja",
                               tr("MJDB Ascii Files (*.mja)"));
}

void MainWindow::on_actionAdd_Column_triggered()
{
    AddField addDialog(this);
    addDialog.exec();
}
