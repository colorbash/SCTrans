#ifndef SCTRANS_H
#define SCTRANS_H

#include <QtGui/QMainWindow>
#include "ui_sctrans.h"
#include "selectsc.h"
#include "settingssc.h"

#define PI				3.1415926535

#define COORDS_TYPE_XYZ 0	// Прямоугольные координаты
#define COORDS_TYPE_BLH	1	// Геодезические координаты
#define COORDS_TYPE_RFL	2	// Геоцентрические координаты

//______________________________________________________________________________________________
struct Op_History	// Operation histоry
{
	int			cur_Type_In_Coord, cur_Type_Out_Coord;				// Тип координат
	QString		inLE_1, inLE_2, inLE_3, outLE_1, outLE_2, outLE_3; 	// Координаты
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
	void setInLabels				(int _n );						// Устанавливает входные лэйблы		
	void setOutLabels				(int _n );						// Устанавливает выходные лэйблы	
	void chooseStartSC				(		);						// Выберем СК для перехода
	void chooseEndSC				(		);						// Выберем СК для перехода
	void transferSC_pb_checked		(		);						// Переход между СК
	void clearLE					(		);						// Очистить
	void turnBack					(		);						// История назад
	void turnFront					(		);						// История вперед
	void hasAction					(		);						// Скажем что было действие
	void setSettings				(		);						// Вызов настроек

	//_________________________________
private:

	SelectSC						selectSC_form;					// Форма выбора СК
	SettingsSC						settings_form;					// Форма настроек

	QVector<Op_History>				back_history;					// История
	QVector<Op_History>				front_history;					// ***


	int								cur_Type_In_Coord;				// содержит тип входных и выхдных координат
	int								cur_Type_Out_Coord;				// ***

	Ui::SCTransClass				ui;

	bool							anyAction;						// Действие после пересчета СК

	QVD			toXYZ				(QVD _coords);					// Перевод в прямоугольные координаты
	QVD			toEndTypeSC			(QVD _xyz	);					// Перевод в тип конечных координат

	//______________________________________________________________// Переход в другую СК по параметрам Гельмерта
	QVD			transfer2RefSC		(SC_Par _pars, QVD _coords, bool _isDirect); 
	//______________________________________________________________

	Op_History	form_history		();
	void		go2history			(Op_History _his);
};
//______________________________________________________________________________________________

QVD  mult_MxV			(QMD m,	 QVD v );							// Матрица на вектор
QVD  V_plus				(QVD v1, QVD v2);							// Сложение векторов
QVD  V_x_C				(QVD v1, double c);							// Вектор и консканта
QMD  M_x_C				(QMD m,  double c);							// Матрица и констатна

void XYZ_2_BLH			(QVD &_xyz, QVD &_blh, double _A, double _F, bool _isDirect);	// Переход из прямоугольных в геодезические
void XYZ_2_RFL			(QVD &_xyz, QVD &_rfl, bool _isDirect);							// Переход из прямоугольных в сферические
QMD  transpose			(QMD m);														// Транспонирование
//______________________________________________________________________________________________


#endif // SCTRANS_H
