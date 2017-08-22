#ifndef SETTINGSSC_H
#define SETTINGSSC_H

//____________________________________________________________________
#define DEGREE	0
#define RADIAN	1

//____________________________________________________________________
#define METR	0
#define KMETR	1

//____________________________________________________________________
#include <QDialog>
#include "ui_settingssc.h"

//____________________________________________________________________
class SettingsSC : public QDialog
{
	Q_OBJECT

public:
	 SettingsSC(QWidget *parent = 0);
	~SettingsSC();

	int linearInd;		// ����� / ��
	int angleInd;		// ������� / �������
	int	sign_after_dot;	// ����� ����� �������
	
	void set_sign_dot();

private slots:
	void ok_pushed();	// ������ ��

private:
	QIntValidator *intValid;
	Ui::SettingsSC ui;
};
//____________________________________________________________________

#endif // SETTINGSSC_H
