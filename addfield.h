#ifndef ADDFIELD_H
#define ADDFIELD_H

#include <QDialog>

namespace Ui {
class AddField;
}

class AddField : public QDialog
{
    Q_OBJECT

public:
    explicit AddField(QWidget *parent = 0);
    ~AddField();

private:
    Ui::AddField *ui;
};

#endif // ADDFIELD_H
