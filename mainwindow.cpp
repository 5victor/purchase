#include "mainwindow.h"
#include "bill.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{

    tabWidget = new QTabWidget();
    tabWidget->addTab(new Bill(), tr("Bill"));

    this->layout()->addWidget(tabWidget);
}
