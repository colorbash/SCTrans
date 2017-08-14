#ifndef CREATESC_H
#define CREATESC_H

#include <QDialog>
#include "ui_createsc.h"
#include <QMessageBox>
#include <QTextCodec>

//______________________________________________________________________________________________
struct SC_Par
{											// ��������� ���������
	QString nameSC;							// ���
	double  dX, dY, dZ;						// �������� �������� ����������������� 
	double  m;								// ���������� ������� �����������������
	double  wX, wY, wZ;						// ������� �������� �����������������
	double  A;								// ������� �������
	double  compK;							// ����� ������
};
//______________________________________________________________________________________________
class CreateSC : public QDialog
{
	Q_OBJECT

public:
	CreateSC(QWidget *parent = 0);
	~CreateSC();

	QDoubleValidator*		validator;
	
	QMap<QString, SC_Par>	*sc_data;		// ��������� �� ������
	SC_Par					new_SC;			// ������ 
	bool					isAddMode;		// ��������/��������

	void setSCPar  (SC_Par *_pars);
	void setAddMode();
	bool isSuccess ();
private:
	Ui::CreateSC ui;
	bool				isSuccessFlag;
private slots:
	void add_SC	  ();
};
//______________________________________________________________________________________________
#endif // CREATESC_H
