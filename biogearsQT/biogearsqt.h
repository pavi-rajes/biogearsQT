#ifndef BIOGEARSQT_H
#define BIOGEARSQT_H

#include <QtWidgets/QMainWindow>
#include "ui_biogearsqt.h"

class biogearsQT : public QMainWindow
{
	Q_OBJECT

public:
	biogearsQT(QWidget *parent = 0);
	~biogearsQT();

private:
	Ui::biogearsQTClass ui;
};

#endif // BIOGEARSQT_H
