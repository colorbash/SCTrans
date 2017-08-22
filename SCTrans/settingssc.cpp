#include "settingssc.h"
//____________________________________________________________________
SettingsSC::SettingsSC(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	linearInd = METR;
	angleInd  = DEGREE;

	intValid = new QIntValidator(0, 15, this);
	ui.sign_dot_le->setValidator(intValid);
	connect(ui.ok_pb, SIGNAL(clicked())	, this,	SLOT(ok_pushed()));
}
//____________________________________________________________________
SettingsSC::~SettingsSC(){}
//____________________________________________________________________
void SettingsSC::ok_pushed()
{
	linearInd		= ui.lin_cb		->currentIndex();
	angleInd		= ui.angl_cb	->currentIndex();
	sign_after_dot	= ui.sign_dot_le->text().toInt(); 
	accept();
}
//____________________________________________________________________
void SettingsSC::set_sign_dot()
{
	ui.sign_dot_le->setText(QString::number(sign_after_dot));
}
//____________________________________________________________________