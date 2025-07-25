#ifndef MAINWINDOW_h
#define MAINWINDOW_h

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
	Q_OBJECT

	public:
		MainWindow(QWidget *parent = nullptr);
		~MainWindow();

	private:
		Ui::MainWindow *Ui;
};

#endif
