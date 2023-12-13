#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "Mudarbase.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,pino(0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonCalcular_clicked()
{
    int numeroBase10 = ui->lineEditNumeroBase->text().toInt();
    int base = ui->comboBox->currentText().toInt();

    jp::MudarBase teste(numeroBase10,base);

    ui->lineEditResultado->setText(teste.CalcularMudanca());


}

