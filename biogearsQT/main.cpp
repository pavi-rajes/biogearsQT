#include "biogearsqt.h"
#include <QtWidgets/QApplication>
#include <QMessageBox>


#include "BioGearsEngineHowTo.h"
#include "engine/PhysiologyEngineTrack.h"
#include "scenario/requests/SEDataRequest.h"
#include "properties/SEScalarTime.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	biogearsQT w;
	w.show();
	return a.exec();
	QMessageBox msg;
	msg.setText("main func is running");
	msg.exec();
	//HowToEngineUse();
}
