#include "addfield.h"
#include "ui_addfield.h"

AddField::AddField(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddField)
{
    ui->setupUi(this);
}

AddField::~AddField()
{
    delete ui;
}
