#ifndef SELECTSC_H
#define SELECTSC_H

#include <QDialog>
#include "ui_selectsc.h"
#include "createsc.h"
#include <QDebug>
#include <stdio.h>
#include <iostream>
#include <QStandardItemModel>
#include "QStandardItem"
#include <QFile>
#include <QTextStream>

#define FNAME		"sc_data.txt"
//______________________________________________________________________________________________
#define START_SC	0
#define END_SC		1
//______________________________________________________________________________________________
typedef QVector<double>				QVD;		// Вектор
typedef QVector<QVector<double>>	QMD;		// Матрица


//______________________________________________________________________________________________
class SelectSC : public QDialog
{
	Q_OBJECT

public:
	SelectSC(QWidget *parent = 0);
	~SelectSC();
	//_____________________________________________________
	QMap<QString, SC_Par>		sc_data;					// Готовые ск

	SC_Par						inSC, outSC;				// Стартовая и конечная СК	

	CreateSC					createSC_form;				// Форма создания
	
	void setTypeSC				(bool _type);				// Тип - нач./конеч.
	
	void show_data				();							// Table refresh

	int	 read_data				();							// Read from file
	//_____________________________________________________
private slots:
	void setSC					();							// Выбор СК
	void setSC					(QModelIndex _ind);			// *
	void createSC				();							// Создать СК
	void deleteSC				();							// Удалить СК
	void editSC					();							// Изменить СК
	//_____________________________________________________
private:
	bool						typeSC;						// тип СК - входной/конечной

	QStandardItemModel			*model;						// for tableView
	QStandardItem				*item;						// *
	QStringList					horizHeader;				// *
	//_____________________________________________________
	Ui::SelectSC ui;
};
//______________________________________________________________________________________________


#endif // SELECTSC_H
