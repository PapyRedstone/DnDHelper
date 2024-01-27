#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QStringListModel>
#include <QString>
#include <qstringlistmodel.h>

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    QStringList a = QStringList(QString("test1"));
    QAbstractListModel* model = new QStringListModel(a);
    ui->persoListTreeView->setModel(model);
}

MainWindow::~MainWindow() {}
