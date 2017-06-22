#pragma once

#include <QWidget>
#include "ui_requestingwidget.h"
#include "Features.h"

class requestingWidget : public QWidget, public Ui::requestingWidget
{
	Q_OBJECT

public:
	requestingWidget(QWidget *parent = Q_NULLPTR);
	~requestingWidget();

	void loadRequestingWidget(QString, QString, QString, QString);
	public slots:
	void on_commandLinkButton_clicked();
	signals:
private:
	Ui::requestingWidget ui;
};
