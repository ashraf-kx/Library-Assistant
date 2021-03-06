#ifndef LOGIN_H
#define LOGIN_H

#include <QtWidgets/QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QtWidgets/QPushButton>
#include "toast.h"

#include "simplecrypt.h"
#include <classes.h>
#include "dbh.h"

Q_DECLARE_LOGGING_CATEGORY(LGN)

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT
    
public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    bool getModelogin();
    QPushButton *getBtLogin();

public slots:
    bool tryLogin();
    void setModeLogin(bool val);
private:
    Ui::Login    *ui;
    SimpleCrypt  *crypto;
    DBH   *DB;
    int   idAdmin;
    bool  loginMode;
    Toast *mToast;
};

#endif // LOGIN_H
