#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    initDb();
//    QSqlTableModel* model = initModel();
//    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::initDb(){
////    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName(":memory:"); // in-memory db
//    db.open();
//    db.exec("CREATE TABLE price (name Text, price Currency)");
//    db.exec("INSERT INTO price (name, price) VALUES('Apple', 2.01)");
//    db.exec("INSERT INTO price (name, price) VALUES('Banana', 1.333)");
//    db.exec("INSERT INTO price (name, price) VALUES('Orange', 0.60)");
//    db.exec("INSERT INTO price (name, price) VALUES('Pear', 1.93)");
//}

//QSqlTableModel* MainWindow::initModel(){
//    QSqlTableModel* model = new QSqlTableModel(this);
//    model->setTable("price");
//    model->select();

//    model->setHeaderData(0, Qt::Horizontal, "Item Name");
//    model->setHeaderData(1, Qt::Horizontal, "Price");
//    return model;
//}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase dbM = QSqlDatabase::addDatabase("QMYSQL");
    dbM.setHostName("127.0.0.1");
    dbM.setUserName("root");
    dbM.setPassword("");
    dbM.setDatabaseName("Tutorial");

    if(dbM.open()){
        QMessageBox::information(this, "Polaczenie z bazą","Poprawnie polaczono :)");
    } else {
        QMessageBox::critical(this, "Brak polaczenia z bazą","Cos nie pyklo :(");
    }
}
