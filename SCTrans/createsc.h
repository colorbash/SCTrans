#ifndef CREATESC_H
#define CREATESC_H

#include <QDialog>
#include "ui_createsc.h"
#include <QMessageBox>
#include <QTextCodec>

//______________________________________________________________________________________________
struct SC_Par
{											// параметры Гельмерта
	QString nameSC;							// Имя
	double  dX, dY, dZ;						// линейные элементы трансформирования 
	double  m;								// масштабный элемент трансформирования
	double  wX, wY, wZ;						// угловые элементы трансформирования
	double  A;								// Большая полуось
	double  compK;							// Коэфф сжатия
};
//______________________________________________________________________________________________
class CreateSC : public QDialog
{
	Q_OBJECT

public:
	CreateSC(QWidget *parent = 0);
	~CreateSC();

	QDoubleValidator*		validator;
	
	QMap<QString, SC_Par>	*sc_data;		// Указатель на данные
	SC_Par					new_SC;			// Данные 
	bool					isAddMode;		// Добавить/Изменить

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
