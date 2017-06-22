#pragma once

#include <QWidget>
#include "ui_accountdetailwidget.h"
#include "Features.h"

class accountDetailWidget : public QWidget, public Ui::accountDetailWidget
{
	Q_OBJECT

public:
	accountDetailWidget(QWidget *parent = Q_NULLPTR);
	~accountDetailWidget();
	void loadAcountWidget(QString, QString, QString, QString, QString, QString, QString);
	public slots:
	void on_block_clicked();
	void on_unblock_clicked();
	void on_demote_clicked();
	void on_promote_clicked();
	void on_resetpass_clicked();
	void on_remove_clicked();
signals:
private:
	Ui::accountDetailWidget ui;
};
