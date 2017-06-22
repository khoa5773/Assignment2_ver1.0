#pragma once

#include <QWidget>
#include "ui_adminmenu.h"
#include "accountdetailwidget.h"
#include "registerform.h"
#include "Features.h"

class adminmenu : public QWidget, public Ui::adminmenu
{
	Q_OBJECT

public:
	adminmenu(QWidget *parent = Q_NULLPTR);
	~adminmenu();
public slots:
	void on_Account_clicked();
	void on_chooseRole_clicked();
	void on_searchButton_clicked();
	void setupAccountWidget(QString, QString);
	void setupAccountWidget(QString);
	void destroyAcountWidget();
	void on_checkUser_stateChanged(int);
	void on_checkAd_stateChanged(int);
	void on_checkLib_stateChanged(int);
	void on_addUser_clicked();
	void on_logoutButton_clicked();
signals:
	void chooserole();
private:
	Ui::adminmenu ui;
	RegisterForm *reg;
};
