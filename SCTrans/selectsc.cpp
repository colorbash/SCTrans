#include "selectsc.h"

//__________________________________________________________________________________________________________________
SelectSC::SelectSC(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.createSC_pb,	SIGNAL(clicked()),					this, SLOT(createSC		()));
	connect(ui.setSC_pb,	SIGNAL(clicked()),					this, SLOT(setSC		()));
	connect(ui.delete_pb,	SIGNAL(clicked()),					this, SLOT(deleteSC		()));
	connect(ui.editSC_pb,	SIGNAL(clicked()),					this, SLOT(editSC		()));
	connect(ui.tableView,	SIGNAL(doubleClicked(QModelIndex)), this, SLOT(setSC(QModelIndex)));

	createSC_form.sc_data = &sc_data;

	if (read_data() || sc_data.isEmpty())
	{
		//___________________________________________________
		// Элементы трансформирования при переходе в систему координат ПЗ-90.11
		SC_Par testSC;

		testSC.dX = +23.557;
		testSC.dY = -140.844;
		testSC.dZ = -79.778;
		testSC.m  = -0.228;
		testSC.wX = -2.30	;
		testSC.wY = -346.46	;
		testSC.wZ = -794.21	;
		testSC.A  = 6378245;
		testSC.compK	  = 298.3;
		testSC.nameSC	  = "СК-42";
		sc_data ["СК-42"] = testSC;

		testSC.dX = 24.457	   ;
		testSC.dY = -130.784   ;
		testSC.dZ = -81.538	   ;
		testSC.m  = -0.228	   ;
		testSC.wX = -2.30	  ;
		testSC.wY = 3.54	  ;
		testSC.wZ = -134.21	  ;
		testSC.A  = 6378245;
		testSC.compK	  = 298.3;
		testSC.nameSC	  = "СК-95";
		sc_data ["СК-95"] = testSC;

		testSC.dX = -1.443 ;
		testSC.dY = +0.156 ;
		testSC.dZ = +0.222 ;
		testSC.m  = -0.228 ;
		testSC.wX = -2.30  ;
		testSC.wY = +3.54  ;
		testSC.wZ = -134.21;
		testSC.A  = 6378136;
		testSC.compK	  = 298.25784;
		testSC.nameSC	  = "ПЗ-90";
		sc_data ["ПЗ-90"] = testSC;

		testSC.dX = -0.013;
		testSC.dY = +0.106;
		testSC.dZ = +0.022;
		testSC.m  = -0.008;
		testSC.wX = -2.30 ;
		testSC.wY = +3.54 ;
		testSC.wZ = -4.21 ;
		testSC.A  = 6378137;
		testSC.compK			  = 298.2572235630;
		testSC.nameSC			  = "WGS-84(G1150)";
		sc_data ["WGS-84(G1150)"] = testSC;

		testSC.dX = -0.373;
		testSC.dY = +0.186;
		testSC.dZ = +0.202;
		testSC.m  = -0.008;
		testSC.wX = -2.30 ;
		testSC.wY = +3.54 ;
		testSC.wZ = -4.21 ;
		testSC.A  = 6378136;
		testSC.compK		 = 298.25784;
		testSC.nameSC		 = "ПЗ-90.02";
		sc_data ["ПЗ-90.02"] = testSC;

		testSC.dX = +0.003;
		testSC.dY = +0.001;
		testSC.dZ = 0.000 ;
		testSC.m  = 0.	  ;
		testSC.wX = -0.019;
		testSC.wY = +0.042;
		testSC.wZ = -0.002;
		testSC.A  = 6378245;
		testSC.compK		  = 298.3;
		testSC.nameSC		  = "ITRF-2008";
		sc_data ["ITRF-2008"] = testSC;

		testSC.dX = 0;
		testSC.dY = 0;
		testSC.dZ = 0;
		testSC.m  = 0;
		testSC.wX = 0;
		testSC.wY = 0;
		testSC.wZ = 0;
		testSC.A  = 6378136;
		testSC.compK		 = 298.25784;
		testSC.nameSC		 = "ПЗ-90.11";
		sc_data ["ПЗ-90.11"] = testSC;
	}

	//___________________________________________________
	model = new QStandardItemModel;

	horizHeader << "Имя СК";
	horizHeader << "dX, м.";
	horizHeader << "dY, м.";
	horizHeader << "dZ, м.";
	horizHeader << "m, 1e-6";
	horizHeader << "wX, угл.мс.";
	horizHeader << "wY, угл.мс.";
	horizHeader << "wZ, угл.мс.";
	horizHeader << "A, м.";
	horizHeader << "Коэф.Сжатия";

	model->setHorizontalHeaderLabels(horizHeader);
	//___________________________________________________
}

//__________________________________________________________________________________________________________________
SelectSC::~SelectSC()
{
	QFile db_file(FNAME);
	
	if (db_file.open(QFile::WriteOnly))
	{
		QTextStream txtStrm(&db_file);
		QMap<QString, SC_Par>::const_iterator sc_iter = sc_data.constBegin();
		while(sc_iter != sc_data.constEnd())
		{
			txtStrm << ">" + sc_iter->nameSC.simplified()	<< "\n";
			txtStrm << sc_iter->dX							<< "\n";
			txtStrm << sc_iter->dY							<< "\n";
			txtStrm << sc_iter->dZ							<< "\n";
			txtStrm << sc_iter->m							<< "\n";
			txtStrm << sc_iter->wX							<< "\n";
			txtStrm << sc_iter->wY							<< "\n";
			txtStrm << sc_iter->wZ							<< "\n";
			txtStrm << QString::number(sc_iter->A,'g',10)	<< "\n";
			txtStrm << sc_iter->compK						<< "\n";
			txtStrm << "\n" ;
			
			++sc_iter;
		}
		db_file.close();
	}	
}

//__________________________________________________________________________________________________________________
void SelectSC::setSC()
{
	QItemSelectionModel *select = ui.tableView->selectionModel();
	if (select->hasSelection())
	{
		QModelIndexList list = select->selectedRows();
		if (list.size() > 1)
		{
			QMessageBox::warning(this, "Ошибка.", "Ошибка выделения строки!");
			return;
		}
		QString str = model->item(list.first().row(), 0)->text();

		if (!sc_data.contains(str))
		{
			QMessageBox::warning(this, "Ошибка", "Ошибка выбора СК!");
			return;
		}

		if (typeSC == START_SC)
		{
			inSC  = sc_data[str];
		}
		else
		{
			outSC = sc_data[str];
		}
		accept();
	}
	else
	{
		QMessageBox::warning(this, "Ошибка.", "Выберите нужную СК!");
		return;
	}

}
//__________________________________________________________________________________________________________________

void SelectSC::setSC( QModelIndex _ind )
{
	QString str = model->item(_ind.row(), 0)->text();

	if (!sc_data.contains(str))
	{
		QMessageBox::warning(this, "Ошибка", "Ошибка выбора СК!");
		return;
	}

	if (typeSC == START_SC)
	{
		inSC  = sc_data[str];
	}
	else
	{
		outSC = sc_data[str];
	}
	accept();
}

//__________________________________________________________________________________________________________________
void SelectSC::createSC()
{
	createSC_form.setAddMode();
	if (createSC_form.exec() == QDialog::Accepted && createSC_form.isSuccess())
	{
		sc_data[createSC_form.new_SC.nameSC] = createSC_form.new_SC;
		show_data();
	}
}

//__________________________________________________________________________________________________________________
void SelectSC::setTypeSC( bool _type)
{
	typeSC = _type;
}
//__________________________________________________________________________________________________________________

void SelectSC::show_data()
{
	int i = 0;
	QMap<QString, SC_Par>::const_iterator sc_iter = sc_data.constBegin();
	while (sc_iter != sc_data.constEnd())
	{

		item = new QStandardItem(sc_iter->nameSC);
		model->setItem(i,0,item);

		item = new QStandardItem(QString::number(sc_iter->dX,	'g',5));
		model->setItem(i,1,item);

		item = new QStandardItem(QString::number(sc_iter->dY,	'g',5));
		model->setItem(i,2,item);

		item = new QStandardItem(QString::number(sc_iter->dZ,	'g',5));
		model->setItem(i,3,item);

		item = new QStandardItem(QString::number(sc_iter->m,	'g',5));
		model->setItem(i,4,item);

		item = new QStandardItem(QString::number(sc_iter->wX,	'g',5));
		model->setItem(i,5,item);

		item = new QStandardItem(QString::number(sc_iter->wY,	'g',5));
		model->setItem(i,6,item);

		item = new QStandardItem(QString::number(sc_iter->wZ,	'g',5));
		model->setItem(i,7,item);

		item = new QStandardItem(QString::number(sc_iter->A,	'g',10));
		model->setItem(i,8,item);

		item = new QStandardItem(QString::number(sc_iter->compK,'g',5));
		model->setItem(i,9,item);
		++i;
		++sc_iter;
	}

	model->setHorizontalHeaderLabels(horizHeader);

	ui.tableView->setModel(model);
	ui.tableView->resizeRowsToContents();
	ui.tableView->resizeColumnsToContents();
}

//__________________________________________________________________________________________________________________
void SelectSC::deleteSC()
{
	QItemSelectionModel *select = ui.tableView->selectionModel();
	if (select->hasSelection())
	{
		QModelIndexList list = select->selectedRows();
		if (list.size() > 1)
		{
			QMessageBox::warning(this, "Ошибка.", "Ошибка выделения строки!");
			return;
		}
		QString str = model->item(list.first().row(), 0)->text();

		if (!sc_data.contains(str))
		{
			QMessageBox::warning(this, "Ошибка", "Ошибка выбора СК!");
			return;
		}

		sc_data.remove(str);
		show_data();
		
	}
	else
	{
		QMessageBox::warning(this, "Ошибка.", "Выберите нужную СК!");
		return;
	}
}
//__________________________________________________________________________________________________________________
void SelectSC::editSC()
{
	QItemSelectionModel *select = ui.tableView->selectionModel();
	if (select->hasSelection())
	{
		QModelIndexList list = select->selectedRows();
		if (list.size() > 1)
		{
			QMessageBox::warning(this, "Ошибка.", "Ошибка выделения строки!");
			return;
		}
		QString str = model->item(list.first().row(), 0)->text();

		if (sc_data.contains(str))
		{
			createSC_form.setSCPar(&sc_data[str]);
			if (createSC_form.exec() == QDialog::Accepted && createSC_form.isSuccess())
			{
				sc_data[createSC_form.new_SC.nameSC] = createSC_form.new_SC;
				show_data();
			}
		}
		else
		{
			QMessageBox::warning(this, "Ошибка", "Ошибка выбора СК!");
			return;
		}
	}
}
//__________________________________________________________________________________________________________________
int SelectSC::read_data()
{
	QFile db_file(FNAME);

	if (db_file.open(QFile::ReadOnly))
	{
		SC_Par temp;
		QString str;
		while(!db_file.atEnd())
		{
			str = db_file.readLine();
			while(!str.contains(">") && !db_file.atEnd())
			{
				str = db_file.readLine();
			}
			if (db_file.atEnd())
				return 0;
			str.remove(0,1);
			temp.nameSC = str.simplified();
			str = db_file.readLine();
			temp.dX		= str.toDouble();
			str = db_file.readLine();
			temp.dY		= str.toDouble();
			str = db_file.readLine();
			temp.dZ		= str.toDouble();
			str = db_file.readLine();
			temp.m		= str.toDouble();
			str = db_file.readLine();
			temp.wX		= str.toDouble();
			str = db_file.readLine();
			temp.wY		= str.toDouble();
			str = db_file.readLine();
			temp.wZ		= str.toDouble();
			str = db_file.readLine();
			temp.A		= str.toDouble();
			str = db_file.readLine();
			temp.compK  = str.toDouble();

			sc_data[temp.nameSC] = temp;
		}
		db_file.close();
		return 0;
	}
	else
		return 1;
}
//__________________________________________________________________________________________________________________

