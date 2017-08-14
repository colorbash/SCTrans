#include "settingssc.h"

//____________________________________________________________________
SettingsSC::SettingsSC(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	linearInd = METR;
	angleInd  = DEGREE;
	connect(ui.ok_pb, SIGNAL(clicked())	, this,	SLOT(ok_pushed()));
}
//____________________________________________________________________
SettingsSC::~SettingsSC()
{

}
//____________________________________________________________________
void SettingsSC::ok_pushed()
{
	linearInd = ui.lin_cb	->currentIndex();
	angleInd  = ui.angl_cb	->currentIndex();
	accept();
}
//____________________________________________________________________