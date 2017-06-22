#pragma once

#include <QDialog>
#include "ui_informationdialog.h"
#include "Features.h"

class informationDialog : public QDialog, public Ui::informationDialog
{
	Q_OBJECT

public:
	QString book;
	informationDialog(QString, QWidget *parent = Q_NULLPTR);
	~informationDialog();
	void loadInfoBook(QString);
	public slots:
	void on_yes_clicked();
	void on_no_clicked();
	signals:
private:
	Ui::informationDialog ui;
	QString id;
};
