#ifndef BIOGEARSQT_H
#define BIOGEARSQT_H

#include <QtWidgets/QMainWindow>
#include <QObject>
#include "GeneratedFiles\ui_biogearsqt.h"


class biogearsQT : public QMainWindow
{
	Q_OBJECT

public:
	biogearsQT(QWidget *parent = 0);
	~biogearsQT();
	Ui::biogearsQTClass ui;
private:
	//Ui::biogearsQTClass ui;

private slots:
	void on_pushButton_clicked();

};

#endif // BIOGEARSQT_H
