#include <QApplication>
#include <QSqlDatabase>
#include "mainwindow.h"
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database.db");
    if(db.open() == false) {
        QMessageBox::warning(NULL, "error", "DataBase Open Fail", QMessageBox::Yes);
        return 0;
    }

    return app.exec();
}

