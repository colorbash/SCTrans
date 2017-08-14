#include "sctrans.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SCTrans w;
	w.setWindowIcon(QPixmap("SCTrans.ico"));
	w.show();
	return a.exec();
}
