#ifndef SCTRANS_H
#define SCTRANS_H

#include <QtGui/QMainWindow>
#include "ui_sctrans.h"
#include "selectsc.h"
#include "settingssc.h"

#define PI				3.1415926535

#define COORDS_TYPE_XYZ 0	// ������������� ����������
#define COORDS_TYPE_BLH	1	// ������������� ����������
#define COORDS_TYPE_RFL	2	// ��������������� ����������

//______________________________________________________________________________________________
struct Op_History	// Operation hist�ry
{
	int			cur_Type_In_Coord, cur_Type_Out_Coord;				// ��� ���������
	QString		inLE_1, inLE_2, inLE_3, outLE_1, outLE_2, outLE_3; 	// ����������
	QString		inSCname,outSCname;
	int			angleInd, linearInd;
};

//______________________________________________________________________________________________
class SCTrans : public QMainWindow
{
	Q_OBJECT
	//_________________________________
public:
	SCTrans(QWidget *parent = 0, Qt::WFlags flags = 0);
	~SCTrans();
	//_________________________________
private slots:
	void setInLabels				(int _n );						// ������������� ������� ������		
	void setOutLabels				(int _n );						// ������������� �������� ������	
	void chooseStartSC				(		);						// ������� �� ��� ��������
	void chooseEndSC				(		);						// ������� �� ��� ��������
	void transferSC_pb_checked		(		);						// ������� ����� ��
	void clearLE					(		);						// ��������
	void turnBack					(		);						// ������� �����
	void turnFront					(		);						// ������� ������
	void hasAction					(		);						// ������ ��� ���� ��������
	void setSettings				(		);						// ����� ��������

	//_________________________________
private:

	SelectSC						selectSC_form;					// ����� ������ ��
	SettingsSC						settings_form;					// ����� ��������

	QVector<Op_History>				back_history;					// �������
	QVector<Op_History>				front_history;					// ***


	int								cur_Type_In_Coord;				// �������� ��� ������� � ������� ���������
	int								cur_Type_Out_Coord;				// ***

	Ui::SCTransClass				ui;

	bool							anyAction;						// �������� ����� ��������� ��

	QVD			toXYZ				(QVD _coords);					// ������� � ������������� ����������
	QVD			toEndTypeSC			(QVD _xyz	);					// ������� � ��� �������� ���������

	//______________________________________________________________// ������� � ������ �� �� ���������� ���������
	QVD			transfer2RefSC		(SC_Par _pars, QVD _coords, bool _isDirect); 
	//______________________________________________________________

	Op_History	form_history		();
	void		go2history			(Op_History _his);
};
//______________________________________________________________________________________________

QVD  mult_MxV			(QMD m,	 QVD v );							// ������� �� ������
QVD  V_plus				(QVD v1, QVD v2);							// �������� ��������
QVD  V_x_C				(QVD v1, double c);							// ������ � ���������
QMD  M_x_C				(QMD m,  double c);							// ������� � ���������

void XYZ_2_BLH			(QVD &_xyz, QVD &_blh, double _A, double _F, bool _isDirect);	// ������� �� ������������� � �������������
void XYZ_2_RFL			(QVD &_xyz, QVD &_rfl, bool _isDirect);							// ������� �� ������������� � �����������
QMD  transpose			(QMD m);														// ����������������
//______________________________________________________________________________________________


#endif // SCTRANS_H
