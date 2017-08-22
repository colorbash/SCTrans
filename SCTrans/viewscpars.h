#ifndef VIEWSCPARS_H
#define VIEWSCPARS_H

#include <QDialog>
#include "ui_viewscpars.h"

class ViewSCPars : public QDialog
{
	Q_OBJECT

public:
	ViewSCPars(QWidget *parent = 0);
	~ViewSCPars();

private:
	Ui::ViewSCPars ui;
};

#endif // VIEWSCPARS_H
