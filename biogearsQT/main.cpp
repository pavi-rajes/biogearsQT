#include "biogearsqt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	biogearsQT w;
	w.show();
	return a.exec();
}
