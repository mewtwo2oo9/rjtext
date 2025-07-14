#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, Ui(new Ui::MainWindow)
{
    Ui->setupUi(this);
}

MainWindow::~MainWindow() {
	delete Ui;
}
