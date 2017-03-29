#include "biogearsqt.h"
#include <QLineEdit>
#include <QMessageBox> 

biogearsQT::biogearsQT(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

biogearsQT::~biogearsQT()
{

}

void biogearsQT::on_pushButton_clicked()
{

	QLineEdit *name = ui.lineEdit_name;
	QLineEdit *age = ui.lineEdit_age;
	QString t_name;
	QString t_age;

	t_name = name->text();
	t_age = age->text();
	int a = t_age.split("")[0].toInt();
	
	QMessageBox::information(this,"Info",t_name);
}
