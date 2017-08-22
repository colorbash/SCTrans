#include "sctrans.h"
//______________________________________________________________________________________
SCTrans::SCTrans(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	anyAction = false;

	ui.transf_pb	->setIcon(QIcon(QPixmap(":/Resources/arrow.png")));
	ui.transf_pb	->setIconSize(QSize(50,50));
	ui.back_pb		->setIcon(QIcon(QPixmap(":/Resources/back.png")));
	ui.back_pb		->setIconSize(QSize(20,20));
	ui.forward_pb	->setIcon(QIcon(QPixmap(":/Resources/forward.png")));
	ui.forward_pb	->setIconSize(QSize(20,20));
	ui.back_pb		->setEnabled(false);
	ui.forward_pb	->setEnabled(false);

	setInLabels		(COORDS_TYPE_XYZ);
	setOutLabels	(COORDS_TYPE_XYZ);

	// for tests
	ui.startSC_le1	->setText("3000000.");
	ui.startSC_le2	->setText("3000000.");
	ui.startSC_le3	->setText("3000000.");
	
	ui.startSC_le1	->setValidator(selectSC_form.createSC_form.validator);
	ui.startSC_le2	->setValidator(selectSC_form.createSC_form.validator);
	ui.startSC_le3	->setValidator(selectSC_form.createSC_form.validator);
	ui.endSC_le1	->setValidator(selectSC_form.createSC_form.validator);
	ui.endSC_le2	->setValidator(selectSC_form.createSC_form.validator);
	ui.endSC_le3	->setValidator(selectSC_form.createSC_form.validator);

	connect(ui.endSC_input_cb,	SIGNAL(currentIndexChanged(int)), this, SLOT(setOutLabels			(int)));
	connect(ui.startSC_input_cb,SIGNAL(currentIndexChanged(int)), this, SLOT(setInLabels			(int)));
	connect(ui.setEndSC_pb,		SIGNAL(clicked				()) , this, SLOT(chooseEndSC			(	)));
	connect(ui.setStartSC_pb,	SIGNAL(clicked				()) , this, SLOT(chooseStartSC			(	)));
	connect(ui.transf_pb,		SIGNAL(clicked				()) , this, SLOT(transferSC_pb_checked	(	)));
	connect(ui.clear_pb,		SIGNAL(clicked				()) , this, SLOT(clearLE				(	)));
	connect(ui.back_pb,			SIGNAL(clicked				()) , this, SLOT(turnBack				(	)));
	connect(ui.forward_pb,		SIGNAL(clicked				()) , this, SLOT(turnFront				(	)));
	connect(ui.settings_pb,		SIGNAL(clicked				())	, this,	SLOT(setSettings			(	)));

	connect(ui.startSC_le1,		SIGNAL(textChanged			()) , this, SLOT(hasAction				(	)));
	connect(ui.startSC_le2,		SIGNAL(textChanged			()) , this, SLOT(hasAction				(	)));
	connect(ui.startSC_le3,		SIGNAL(textChanged			()) , this, SLOT(hasAction				(	)));
	connect(ui.startSC_le_name,	SIGNAL(textChanged			()) , this, SLOT(hasAction				(	)));
	connect(ui.endSC_le_name,	SIGNAL(textChanged			()) , this, SLOT(hasAction				(	)));

	ui.back_pb		->setToolTip("Возрват назад"		);
	ui.forward_pb	->setToolTip("Вперед"				);
	ui.transf_pb	->setToolTip("Переход"				);
	ui.settings_pb	->setToolTip("Параметры"			);
	ui.setEndSC_pb	->setToolTip("Задать конечную СК"	);
	ui.setStartSC_pb->setToolTip("Задать начальную СК"	);
	ui.clear_pb		->setToolTip("Очистить поля данных"	);

	settings_form.sign_after_dot = 6;
}
//______________________________________________________________________________________
SCTrans::~SCTrans(){}
//______________________________________________________________________________________
void SCTrans::setInLabels		(int _n)
{
	cur_Type_In_Coord = _n;
	ui.startSC_le1->setText("");
	ui.startSC_le2->setText("");
	ui.startSC_le3->setText("");
	// Метры
	//_______________________________________________
	if (settings_form.linearInd == METR)
	{
		switch(_n)
		{
		case COORDS_TYPE_XYZ:
			{
				ui.startSC_lb1->setText("X, м.");
				ui.startSC_lb2->setText("Y, м.");
				ui.startSC_lb3->setText("Z, м.");
				break;
			}
		case COORDS_TYPE_BLH:
			{
				ui.startSC_lb3->setText("H, м.");
				break;
			}
		case COORDS_TYPE_RFL:
			{
				ui.startSC_lb1->setText("R, м.");
				break;
			}
		}
	}
	// КМ
	//_______________________________________________
	if (settings_form.linearInd == KMETR)
	{
		switch(_n)
		{
		case COORDS_TYPE_XYZ:
			{
				ui.startSC_lb1->setText("X, км.");
				ui.startSC_lb2->setText("Y, км.");
				ui.startSC_lb3->setText("Z, км.");
				break;
			}
		case COORDS_TYPE_BLH:
			{
				ui.startSC_lb3->setText("H, км.");
				break;
			}
		case COORDS_TYPE_RFL:
			{
				ui.startSC_lb1->setText("R, км.");
				break;
			}
		}
	}
	// Град
	//_______________________________________________
	if (settings_form.angleInd == DEGREE)
	{
		switch(_n)
		{
		
		case COORDS_TYPE_BLH:
			{
				ui.startSC_lb1->setText("B, град.");
				ui.startSC_lb2->setText("L, град.");
				break;
			}
		case COORDS_TYPE_RFL:
			{
				ui.startSC_lb2->setText("F, град.");
				ui.startSC_lb3->setText("L, град.");
				break;
			}
		}
	}
	// рад
	//_______________________________________________
	if (settings_form.angleInd == RADIAN)
	{
		switch(_n)
		{

		case COORDS_TYPE_BLH:
			{
				ui.startSC_lb1->setText("B, рад.");
				ui.startSC_lb2->setText("L, рад.");
				break;
			}
		case COORDS_TYPE_RFL:
			{
				ui.startSC_lb2->setText("F, рад.");
				ui.startSC_lb3->setText("L, рад.");
				break;
			}
		}
	}
	//_______________________________________________
}
//______________________________________________________________________________________
void SCTrans::setOutLabels		(int _n)
{
	cur_Type_Out_Coord = _n;
	ui.endSC_le1->setText("");
	ui.endSC_le2->setText("");
	ui.endSC_le3->setText("");
	// Метры
	//_______________________________________________
	if (settings_form.linearInd == METR)
	{
		switch(_n)
		{
		case COORDS_TYPE_XYZ:
			{
				ui.endSC_lb1->setText("X, м.");
				ui.endSC_lb2->setText("Y, м.");
				ui.endSC_lb3->setText("Z, м.");
				break;
			}
		case COORDS_TYPE_BLH:
			{
				ui.endSC_lb3->setText("H, м.");
				break;
			}
		case COORDS_TYPE_RFL:
			{
				ui.endSC_lb1->setText("R, м.");
				break;
			}
		}
	}
	// КМ
	//_______________________________________________
	if (settings_form.linearInd == KMETR)
	{
		switch(_n)
		{
		case COORDS_TYPE_XYZ:
			{
				ui.endSC_lb1->setText("X, км.");
				ui.endSC_lb2->setText("Y, км.");
				ui.endSC_lb3->setText("Z, км.");
				break;
			}
		case COORDS_TYPE_BLH:
			{
				ui.endSC_lb3->setText("H, км.");
				break;
			}
		case COORDS_TYPE_RFL:
			{
				ui.endSC_lb1->setText("R, км.");
				break;
			}
		}
	}
	// Град
	//_______________________________________________
	if (settings_form.angleInd == DEGREE)
	{
		switch(_n)
		{

		case COORDS_TYPE_BLH:
			{
				ui.endSC_lb1->setText("B, град.");
				ui.endSC_lb2->setText("L, град.");
				break;
			}
		case COORDS_TYPE_RFL:
			{
				ui.endSC_lb2->setText("F, град.");
				ui.endSC_lb3->setText("L, град.");
				break;
			}
		}
	}
	// рад
	//_______________________________________________
	if (settings_form.angleInd == RADIAN)
	{
		switch(_n)
		{

		case COORDS_TYPE_BLH:
			{
				ui.endSC_lb1->setText("B, рад.");
				ui.endSC_lb2->setText("L, рад.");
				break;
			}
		case COORDS_TYPE_RFL:
			{
				ui.endSC_lb2->setText("F, рад.");
				ui.endSC_lb3->setText("L, рад.");
				break;
			}
		}
	}
}

//______________________________________________________________________________________
void SCTrans::chooseStartSC		(		)
{
	selectSC_form.setTypeSC(START_SC);
	selectSC_form.show_data();
	if (selectSC_form.exec() == QDialog::Accepted)
	{
		ui.startSC_le_name->setText(selectSC_form.inSC.nameSC);
	}
}
//______________________________________________________________________________________
void SCTrans::chooseEndSC		(		)
{
	selectSC_form.setTypeSC(END_SC);
	selectSC_form.show_data();
	if (selectSC_form.exec() == QDialog::Accepted)
	{
		ui.endSC_le_name->setText(selectSC_form.outSC.nameSC);
	}
}
//______________________________________________________________________________________
void SCTrans::transferSC_pb_checked()
{

	// Проверки
	//____________________________________________________ 
	QMap<QString, SC_Par>::iterator name_iter = selectSC_form.sc_data.begin();
	while(name_iter != selectSC_form.sc_data.end())
	{
		if (name_iter.key() == ui.startSC_le_name->text())
		{
			selectSC_form.inSC = name_iter.value();
			break;
		}
		++name_iter;
	}
	if (name_iter == selectSC_form.sc_data.end())
	{
		QMessageBox::warning(this, "Ошибка!", "Не правильно задана начальная СК");
		return;
	}


	//____________________________________________________
	name_iter = selectSC_form.sc_data.begin();
	while(name_iter != selectSC_form.sc_data.end())
	{
		if (name_iter.key() == ui.endSC_le_name->text())
		{
			selectSC_form.outSC = name_iter.value();
			break;
		}
		++name_iter;
	}
	if (name_iter == selectSC_form.sc_data.end())
	{
		QMessageBox::warning(this, "Ошибка!", "Не правильно задана конечная СК");
		return;
	}


	// Возмем координаты
	//________________________________________________________________________________________________________
	QVD		in_coords(3);
	bool	flag;
	in_coords[0] = ui.startSC_le1->text().toDouble(&flag);
	if (!flag)
	{
		QMessageBox::warning(this, "Ошибка!", "Не правильно заданы координаты");
		return;
	}
	in_coords[1] = ui.startSC_le2->text().toDouble(&flag);
	if (!flag)
	{
		QMessageBox::warning(this, "Ошибка!", "Не правильно заданы координаты");
		return;
	}
	in_coords[2] = ui.startSC_le3->text().toDouble(&flag);
	if (!flag)
	{
		QMessageBox::warning(this, "Ошибка!", "Не правильно заданы координаты");
		return;
	}

	// 1 преобразуем входные координаты к прямоугольным
	//________________________________________________________________________________________________________
	if (cur_Type_In_Coord != COORDS_TYPE_XYZ)
	{
		in_coords = toXYZ(in_coords);
		qDebug()<<"toXYZ:";
		qDebug()<<QString::number(in_coords[0], 'g', 14);
		qDebug()<<QString::number(in_coords[1], 'g', 14);
		qDebug()<<QString::number(in_coords[2], 'g', 14);
	}
	else
	{
		if (settings_form.linearInd == KMETR)
		{
			in_coords[0] *= 1000;
			in_coords[1] *= 1000;
			in_coords[2] *= 1000;
		}
	}
	if (selectSC_form.outSC.nameSC != selectSC_form.inSC.nameSC) // Если нач. СК == кон. СК
	{
		// 2 перевод в опорную СК (ПЗ-90.11)
		//________________________________________________________________________________________________________
		if (selectSC_form.inSC.nameSC != "ПЗ-90.11")
		{
			in_coords = transfer2RefSC(selectSC_form.inSC, in_coords, true);
			qDebug()<<"Transform to PZ-90.11:";
			qDebug()<<QString::number(in_coords[0], 'g', 14);
			qDebug()<<QString::number(in_coords[1], 'g', 14);
			qDebug()<<QString::number(in_coords[2], 'g', 14);
		}
		// 3 перевод в конечную СК
		//________________________________________________________________________________________________________
		if (selectSC_form.outSC.nameSC != "ПЗ-90.11")
		{
			in_coords = transfer2RefSC(selectSC_form.outSC, in_coords, false);
			qDebug()<<"transform to End Type:";
			qDebug()<<QString::number(in_coords[0], 'g', 14);
			qDebug()<<QString::number(in_coords[1], 'g', 14);
			qDebug()<<QString::number(in_coords[2], 'g', 14);
		}
	}
	

	// 4 перевод в нужный вид координат
	//________________________________________________________________________________________________________
	if (cur_Type_Out_Coord != COORDS_TYPE_XYZ)
		in_coords = toEndTypeSC(in_coords);
	else
	{
		if (settings_form.linearInd == KMETR)	// Возврат в КМ если надо
		{
			in_coords[0] *= 0.001;
			in_coords[1] *= 0.001;
			in_coords[2] *= 0.001;
		}
	}

	// Запишем результат
	//________________________________________________________________________________________________________
	ui.endSC_le1->setText(getAccurStr(in_coords[0], settings_form.sign_after_dot));
	ui.endSC_le2->setText(getAccurStr(in_coords[1], settings_form.sign_after_dot));
	ui.endSC_le3->setText(getAccurStr(in_coords[2], settings_form.sign_after_dot));
	//________________________________________________________________________________________________________

	// История
	//________________________________________________________________________________________________________
	back_history << formHistory();
	if (back_history.size() > 100)
		back_history.remove(0);
	front_history	.clear();
	ui.forward_pb	->setEnabled(false);
	if (back_history.size() >= 2)
		ui.back_pb	->setEnabled(true );
	//________________________________________________________________________________________________________
}
//________________________________________________________________________________________________________
QVD SCTrans::transfer2RefSC( SC_Par _pars, QVD _coords, bool _isDirect)
{
	QMD mW(3); 
	QVD dXYZ, res(3);

	// Смотрим на направление перехода
	//________________________________________________________________
	if (!_isDirect)
	{
		_pars.dX *= -1.;
		_pars.dY *= -1.;
		_pars.dZ *= -1.;
		_pars.wX *= -1.;
		_pars.wY *= -1.;
		_pars.wZ *= -1.;
		_pars.m  *= -1.;
	}

	// Углы
	//________________________________________________________________
	mW[0]	<< 1.							<< +_pars.wZ/3600000.*PI/180.	<< -_pars.wY/3600000.*PI/180.; // угл.мс -> рад
	mW[1]	<< -_pars.wZ/3600000.*PI/180.	<< 1.							<< +_pars.wX/3600000.*PI/180.;
	mW[2]	<< +_pars.wY/3600000.*PI/180.	<< -_pars.wX/3600000.*PI/180.	<< 1.;

	// Линейные прирощения
	//________________________________________________________________
	dXYZ	<< _pars.dX		<< _pars.dY		<<_pars.dZ;

	// Масштабный коэф.
	//________________________________________________________________
	double m = 1 + _pars.m * 1e-6;

	// Перемножение
	//________________________________________________________________
	mW  = M_x_C		(mW,	m	);
	res = mult_MxV	(mW, _coords);
	res = V_plus	(res, dXYZ	);
	//________________________________________________________________
	return res;
}
//______________________________________________________________________________________
QVD mult_MxV(QMD m, QVD v)
{
	QVector<double> res(m.size());

	for (int i = 0; i<m.size(); ++i)
	{
		for (int j = 0; j<v.size(); j++) 
			res[i] += m[i][j]*v[j];
	}
	return res;
}
//______________________________________________________________________________________
QVD V_plus	(QVD v1, QVD v2)
{
	QVD	res;
	if (v1.size() != v2.size())
		return res;
	for (int i=0;i<v1.size();++i)
	{
		res << v1[i] + v2[i];
	}
	return res;
}
//______________________________________________________________________________________
QVD V_x_C	(QVD v1, double c)
{
	QVD	res;
	for (int i=0;i<v1.size();++i)
	{
		res << v1[i] * c;
	}
	return res;
}
//______________________________________________________________________________________
QMD M_x_C	(QMD m, double c)
{
	if(m.isEmpty())
		return m;
	for (int i=0;i<m.size();++i)
	{
		for (int j=0;j<m[0].size();++j)
		{
			m[i][j] *= c;
		}
	}
	return m;
}
//______________________________________________________________________________________
QVD SCTrans::toEndTypeSC(QVD _xyz)
{
	QVD	coords(3);
	if (cur_Type_Out_Coord == COORDS_TYPE_BLH)
	{
		XYZ_2_BLH(_xyz, coords, selectSC_form.inSC.A, selectSC_form.inSC.compK, true);
		// to degrees
		if (settings_form.angleInd == DEGREE)
		{
			coords[0] *= 180./PI;
			coords[1] *= 180./PI;
		}
		// to meters
		if (settings_form.linearInd == KMETR)
		{
			coords[2] *= 0.001; 
		}
	}



	if (cur_Type_Out_Coord == COORDS_TYPE_RFL)
	{
		XYZ_2_RFL(_xyz, coords, true);
		// to radians
		if (settings_form.angleInd == DEGREE)
		{
			coords[1] *= 180./PI;
			coords[2] *= 180./PI;
		}
		// to meters
		if (settings_form.linearInd == KMETR)
		{
			coords[0] *= 0.001; 
		}
	}
	return coords;
}
//______________________________________________________________________________________
QVD SCTrans::toXYZ( QVD _coords )
{
	QVD	xyz(3);
	if (cur_Type_In_Coord == COORDS_TYPE_BLH)
	{
		//____________________
		// to radians
		if (settings_form.angleInd == DEGREE)
		{
			_coords[0] *= PI/180.;
			_coords[1] *= PI/180.;
		}
		// to meters
		if (settings_form.linearInd == KMETR)
		{
			_coords[2] *= 1000; 
		}
		XYZ_2_BLH(xyz, _coords, selectSC_form.inSC.A, selectSC_form.outSC.compK, false);
		//____________________
	}

	if (cur_Type_In_Coord == COORDS_TYPE_RFL)
	{
		//____________________
		// to radians
		if (settings_form.angleInd == DEGREE)
		{
			_coords[1] *= PI/180.;
			_coords[2] *= PI/180.;
		}
		// to meters
		if (settings_form.linearInd == KMETR)
		{
			_coords[0] *= 1000; 
		}
		XYZ_2_RFL(xyz, _coords, false);
		//____________________
	}
	return xyz;
}
//______________________________________________________________________________________
void SCTrans::clearLE()
{
	ui.endSC_le1			->setText("");
	ui.endSC_le2			->setText("");
	ui.endSC_le3			->setText("");
	ui.startSC_le1			->setText("");
	ui.startSC_le2			->setText("");
	ui.startSC_le3			->setText("");
	ui.endSC_le_name		->setText("");
	ui.startSC_le_name		->setText("");
}
//______________________________________________________________________________________
Op_History SCTrans::formHistory()
{
	Op_History his;

	his.cur_Type_In_Coord	= cur_Type_In_Coord;
	his.cur_Type_Out_Coord	= cur_Type_Out_Coord;
	his.inLE_1				= ui.startSC_le1	->text();
	his.inLE_2				= ui.startSC_le2	->text();
	his.inLE_3				= ui.startSC_le3	->text();
	his.outLE_1				= ui.endSC_le1		->text();
	his.outLE_2				= ui.endSC_le2		->text();
	his.outLE_3				= ui.endSC_le3		->text();
	his.inSCname			= ui.startSC_le_name->text();
	his.outSCname			= ui.endSC_le_name	->text();
	his.angleInd			= settings_form.angleInd;
	his.linearInd			= settings_form.linearInd;
	
	return his;
}
//______________________________________________________________________________________
void SCTrans::turnBack()
{
	if (back_history.isEmpty())
	{
		ui.back_pb->setEnabled(false);
		return;
	}
	front_history << back_history.last();
	back_history.remove(back_history.size()-1);
	go2history(back_history.last());
	ui.forward_pb->setEnabled(true);
	if (back_history.size() <= 1)
		ui.back_pb->setEnabled(false);
}
//______________________________________________________________________________________
void SCTrans::turnFront()
{
	if (front_history.isEmpty())
	{
		ui.forward_pb->setEnabled(false);
		return;
	}
	go2history(front_history.last());
	back_history << front_history.last();
	front_history.remove(front_history.size()-1);
	ui.back_pb->setEnabled(true);
	if (front_history.isEmpty())
		ui.forward_pb->setEnabled(false);
}
//______________________________________________________________________________________
void SCTrans::go2history( Op_History _his )
{
	settings_form.linearInd = _his.linearInd;
	settings_form.angleInd  = _his.angleInd;
	cur_Type_In_Coord		= _his.cur_Type_In_Coord;
	cur_Type_Out_Coord		= _his.cur_Type_Out_Coord;
	setInLabels				(cur_Type_In_Coord );
	setOutLabels			(cur_Type_Out_Coord);
	ui.endSC_input_cb		->setCurrentIndex(cur_Type_Out_Coord);
	ui.startSC_input_cb		->setCurrentIndex(cur_Type_In_Coord );

	ui.startSC_le1			->setText(_his.inLE_1	);
	ui.startSC_le2			->setText(_his.inLE_2	);
	ui.startSC_le3			->setText(_his.inLE_3	);
	ui.endSC_le1			->setText(_his.outLE_1	);
	ui.endSC_le2			->setText(_his.outLE_2	);
	ui.endSC_le3			->setText(_his.outLE_3	);
	ui.startSC_le_name		->setText(_his.inSCname	);
	ui.endSC_le_name		->setText(_his.outSCname);
}
//______________________________________________________________________________________
void SCTrans::hasAction()
{
	if (!anyAction)
	{
		anyAction = true;
		if (back_history.size() >= 2)
			ui.back_pb->setEnabled(true);
	}
}
//______________________________________________________________________________________
void SCTrans::setSettings()
{
	settings_form.set_sign_dot();
	if (settings_form.exec() == QDialog::Accepted)
	{
		setInLabels (ui.startSC_input_cb->currentIndex());
		setOutLabels(ui.endSC_input_cb  ->currentIndex());
		front_history.clear();
		ui.forward_pb->setEnabled(false);
	}
}
//______________________________________________________________________________________
// Перевод из ГСК в геодезическую и обратно
//______________________________________________________________________________________
void XYZ_2_BLH					(	
									QVD		&_xyz,		// Прямоугольные
									QVD		&_blh,		// Геодезические
									double	_A,			// Большая полуось
									double	_F,			// Параметр сжатия
									bool	_isDirect	// Направление
								)
{
	_F = 1/_F;
	if (_isDirect)
	{
		//_____________________________________________________________
		dreal B  = 0.0L, L = 0.0L, H = 0.0L;
		dreal e2 = (2.0L*(dreal)_F - (dreal)_F*(dreal)_F);
		dreal r  = sqrtl(_xyz[0]*_xyz[0]+_xyz[1]*_xyz[1]);
		//________________________________________________
		if (fabsl(r) < 1e-12L) // r = 0
		{
			B = PI*_xyz[2] / (2.0L*fabsl(_xyz[2]));
			L = 0.0L;
			H = _xyz[2]*sinl(B) - ((dreal)_A)*sqrtl(1 - e2*sinl(B)*sinl(B));
		}
		else
		{
			//____________________________________________
			if (r > 0.0L)
			{
				dreal L0 = fabsl(asinl((dreal)_xyz[1] / r));
				if (_xyz[1] < 0 && _xyz[0] > 0)		L = 2*PI - L0;
				if (_xyz[1] < 0 && _xyz[0] < 0)		L = PI + L0;
				if (_xyz[1] > 0 && _xyz[0] < 0)		L = PI - L0;
				if (_xyz[1] > 0 && _xyz[0] > 0)		L = L0;	
			}
			//____________________________________________
			if (fabsl((dreal)_xyz[2]) < 1e-12L)	// Z = 0
			{
				B = 0.0L;
				H = r - (dreal)_A;
			}
			else
			{
				dreal ro	= sqrtl((dreal)(_xyz[0]*_xyz[0] + _xyz[1]*_xyz[1] + _xyz[2]*_xyz[2]));
				dreal c		= asinl(((dreal)_xyz[2]) / ro);
				dreal p		= e2 * ((dreal)_A) / (2.0L * ro);
				dreal s1	= 1.0L, s2 = 0.0L, b;

				while (fabsl(s1 - s2) >= 1E-12L) 
				{
					s1	= s2;
					b	= c + s1;
					s2	= asinl(p * sinl(2.0L * b) / sqrtl(1.0L - e2 * sinl(b)*sinl(b)));
				} 

				B = b;
				H = r*cosl(B) + ((dreal)_xyz[2])*sinl(B) - ((dreal)_A)*sqrtl(1.0L - e2*sinl(B)*sinl(B));
			}
			//____________________________________________
		}
		_blh[0] = (double) B;
		_blh[1] = (double) L;
		_blh[2] = (double) H;
	}
	//_____________________________________________________________
	else
	//_____________________________________________________________
	{
		dreal e2	= (2.0L*(dreal)_F - (dreal)_F*(dreal)_F);
		dreal N		= ((dreal)_A) / sqrtl(1 - e2 * sinl(_blh[0])*sinl(_blh[0]));

		_xyz[0]		= (N + _blh[2]) * cosl(_blh[0]) * cosl(_blh[1]);	// X
		_xyz[1]		= (N + _blh[2]) * cosl(_blh[0]) * sinl(_blh[1]);	// Y
		_xyz[2]		= ((1 - e2)		* N +  _blh[2]) * sinl(_blh[0]); 	// Z
	}
	//_____________________________________________________________
}
//______________________________________________________________________________________
void XYZ_2_RFL( QVD &_xyz, QVD &_rfl, bool _isDirect )
{
	if (_isDirect)
	//_____________________________________________________________
	{
		if (_xyz.size() != 3)
			return;
		_rfl.clear();
		_rfl.resize(3);
		_rfl[0] = sqrt(_xyz[0]*_xyz[0] + _xyz[1]*_xyz[1] + _xyz[2]*_xyz[2]);
		_rfl[1] = asin(_xyz[2] / sqrt(_xyz[0]*_xyz[0] + _xyz[1]*_xyz[1] + _xyz[2]*_xyz[2]));
		_rfl[2] = asin(_xyz[1] / sqrt(_xyz[0]*_xyz[0] + _xyz[1]*_xyz[1]));
	}
	//_____________________________________________________________
	else
	//_____________________________________________________________
	{
		if (_rfl.size() != 3)
			return;
		_xyz.clear();
		_xyz.resize(3);
		_xyz[0] = _rfl[0] * cos(_rfl[1]) * cos(_rfl[2]);
		_xyz[1] = _rfl[0] * cos(_rfl[1]) * sin(_rfl[2]);
		_xyz[2] = _rfl[0] * sin(_rfl[1]);
	}
	//_____________________________________________________________
}
//______________________________________________________________________________________
QMD transpose	(QMD m)
{
	QMD res(m[0].size());
	for (int i=0;i<m[0].size();++i)//transpose
		for (int j=0;j<m.size();j++)
			res[i].push_back(m[j][i]);
	return res;
}

QString getAccurStr( double _val, int _sign )
{
	return QString::number(_val, 'g', log10(_val) + _sign + 1);
}

//______________________________________________________________________________________
