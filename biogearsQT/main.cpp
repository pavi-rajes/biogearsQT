#include "biogearsqt.h"
#include <QtWidgets/QApplication>
#include <QMessageBox>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	biogearsQT w;
	w.show();
	return a.exec();
	QMessageBox msg;
	msg.setText("main func is running");
	msg.exec();
	//void Se();
	
	

}

//void Se()
//{
//	std::unique_ptr<PhysiologyEngine> bg = CreateBioGearsEngine("HowToEngineUse.log");
//	QMessageBox message;
//	message.setText("Biogears function is running");
//	message.exec();
//}