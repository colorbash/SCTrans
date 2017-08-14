#include "createsc.h"
//__________________________________________________________________________________________
CreateSC::CreateSC(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	
	// Russian languege
	//_________________________________________________
	setlocale(LC_NUMERIC,"C");
	QTextCodec::setCodecForTr		(QTextCodec::codecForName("CP1251"));	
	QTextCodec::setCodecForCStrings	(QTextCodec::codecForName("CP1251"));
	//_________________________________________________
	
	connect(ui.add_pb, SIGNAL(clicked()), this, SLOT(add_SC()));
	
	validator = new QDoubleValidator(-99999999,99999999, 10, this);
	ui.dX_le	->setValidator(validator);
	ui.dX_le	->setValidator(validator);
	ui.dX_le	->setValidator(validator);
	ui.m_le		->setValidator(validator);
	ui.wX_le	->setValidator(validator);
	ui.wY_le	->setValidator(validator);
	ui.wZ_le	->setValidator(validator);
}

//__________________________________________________________________________________________
CreateSC::~CreateSC()
{

}
//__________________________________________________________________________________________

void CreateSC::add_SC()
{
	bool test_fl  = true;
	isSuccessFlag = true;
	new_SC.dX = ui.dX_le->text().toDouble(&test_fl);
	if (!test_fl)
	{
		isSuccessFlag = false;
		QMessageBox::warning(this, "Ошибка.", "Некорректный ввод данных!");
		return;
	}
	new_SC.dY = ui.dY_le->text().toDouble(&test_fl);
	if (!test_fl)
	{
		isSuccessFlag = false;
		QMessageBox::warning(this, "Ошибка.", "Некорректный ввод данных!");
		return;
	}
	new_SC.dZ = ui.dZ_le->text().toDouble(&test_fl);
	if (!test_fl)
	{
		isSuccessFlag = false;
		QMessageBox::warning(this, "Ошибка.", "Некорректный ввод данных!");
		return;
	}
	new_SC.m  = ui.m_le->text().toDouble(&test_fl);
	if (!test_fl)
	{
		isSuccessFlag = false;
		QMessageBox::warning(this, "Ошибка.", "Некорректный ввод данных!");
		return;
	}
	new_SC.wX = ui.wX_le->text().toDouble(&test_fl);
	if (!test_fl)
	{
		isSuccessFlag = false;
		QMessageBox::warning(this, "Ошибка.", "Некорректный ввод данных!");
		return;
	}
	new_SC.wY = ui.wY_le->text().toDouble(&test_fl);
	if (!test_fl)
	{
		isSuccessFlag = false;
		QMessageBox::warning(this, "Ошибка.", "Некорректный ввод данных!");
		return;
	}
	new_SC.wZ = ui.wZ_le->text().toDouble(&test_fl);
	if (!test_fl)
	{
		isSuccessFlag = false;
		QMessageBox::warning(this, "Ошибка.", "Некорректный ввод данных!");
		return;
	}
	new_SC.A = ui.a_ell_le->text().toDouble(&test_fl);
	if (!test_fl)
	{
		isSuccessFlag = false;
		QMessageBox::warning(this, "Ошибка.", "Некорректный ввод данных!");
		return;
	}
	new_SC.compK = ui.compK_le->text().toDouble(&test_fl);
	if (!test_fl)
	{
		isSuccessFlag = false;
		QMessageBox::warning(this, "Ошибка.", "Некорректный ввод данных!");
		return;
	}
	new_SC.nameSC = ui.name_le->text();

	if (sc_data->size() && isAddMode)
	{
		QMap<QString, SC_Par>::const_iterator sc_iter = sc_data->constBegin();
		while(sc_iter != sc_data->constEnd())
		{
			if (sc_iter.key() == new_SC.nameSC)
			{
				QMessageBox::warning(this, "Ошибка.", "СК с таким именем уже есть в базе данных!");
				return;
			}
			++sc_iter;
		}
	}
	accept();
}
//__________________________________________________________________________________________
bool CreateSC::isSuccess()
{
	return isSuccessFlag;
}

void CreateSC::setSCPar(SC_Par *_pars)
{
	isAddMode	= false;
	ui.add_pb	->setText				 ("Изменить");
	ui.name_le	->setEnabled			 (false);
	ui.name_le	->setText				 (_pars->nameSC);
	ui.compK_le	->setText(QString::number(_pars->compK));
	ui.a_ell_le	->setText(QString::number(_pars->A,'g',10));
	ui.dX_le	->setText(QString::number(_pars->dX));
	ui.dY_le	->setText(QString::number(_pars->dY));
	ui.dZ_le	->setText(QString::number(_pars->dZ));
	ui.wX_le	->setText(QString::number(_pars->wX));
	ui.wY_le	->setText(QString::number(_pars->wY));
	ui.wZ_le	->setText(QString::number(_pars->wZ));
	ui.m_le		->setText(QString::number(_pars->m,'g',10));
}

void CreateSC::setAddMode()
{
	isAddMode = true;
	ui.name_le->setEnabled(true);
	ui.add_pb->setText("Добавить");
	ui.name_le	->setText("Новая СК");
	ui.compK_le	->setText("0");
	ui.a_ell_le	->setText("0");
	ui.dX_le	->setText("0");
	ui.dY_le	->setText("0");
	ui.dZ_le	->setText("0");
	ui.wX_le	->setText("0");
	ui.wY_le	->setText("0");
	ui.wZ_le	->setText("0");
	ui.m_le		->setText("0");
}
