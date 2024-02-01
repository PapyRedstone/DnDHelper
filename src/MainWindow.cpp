#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QStringListModel>
#include <QString>
#include <qstandarditemmodel.h>

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    QStandardItemModel* model = new QStandardItemModel;
    QStandardItem* parentItem = model->invisibleRootItem();
    for (int i = 0; i < 4; ++i) {
        QStandardItem* item = new QStandardItem(QString("item %0").arg(i));
        parentItem->appendRow(item);
        parentItem = item;
    }
    ui->persoListTreeView->setModel(model);
}

MainWindow::~MainWindow() {}
