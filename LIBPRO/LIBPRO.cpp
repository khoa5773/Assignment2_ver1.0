#include "LIBPRO.h"
#include <qmessagebox.h>
#include "Features.h"

LIBPRO::LIBPRO(QWidget *parent)
	: QMainWindow(parent)
{ 
	ui.setupUi(this);
	ui.stackedWidget->setCurrentIndex(0);
	// Create connect
	QObject::connect(ui.pushButtonLogin, SIGNAL(clicked()), this, SLOT(openBox()));
	QObject::connect(ui.lineEdit_user, SIGNAL(returnPressed()), ui.pushButtonLogin, SIGNAL(clicked()));
	QObject::connect(ui.lineEdit_pass, SIGNAL(returnPressed()), ui.pushButtonLogin, SIGNAL(clicked()));
	QObject::connect(ui.pushButtonRegister, SIGNAL(clicked()), this, SLOT(signUp()));
	QObject::connect(ui.pushButtonForgotPass, SIGNAL(clicked()), this, SLOT(forgotPass()));
}

void LIBPRO::openBox() {
	QString username = ui.lineEdit_user->text();
	QString password = ui.lineEdit_pass->text();
	if (checkLogin(username,password)) { // condition check when data in the database is correct
		writeDB(username, password, getInfo(username).at(0),getInfo(username).at(1),getInfo(username).at(2),getInfo(username).at(3));
		QMessageBox::information(this, "Sign In", "Login Success!");
		QObject::disconnect(ui.lineEdit_user, SIGNAL(returnPressed()), ui.pushButtonLogin, SIGNAL(clicked()));
		QObject::disconnect(ui.lineEdit_pass, SIGNAL(returnPressed()), ui.pushButtonLogin, SIGNAL(clicked()));

		// Choose role
		QString role = getRole(username);

		if (role == "G") {
			usermenu = new UserMenu(this);
			usermenu->show();
		}
		else {
			ui.stackedWidget->setCurrentIndex(1);
			if (role == "A") {
				ui.adminButton->setEnabled(true);
				ui.libButton->setEnabled(false);
			}
			else if (role == "L") {
				ui.adminButton->setEnabled(false);
				ui.libButton->setEnabled(true);
			}
			else if (role == "B") {
				ui.adminButton->setEnabled(true);
				ui.libButton->setEnabled(true);
			}
		}
	}
	else {
		QMessageBox::warning(this, "Error", "Login Error\nWrong username or password");
	}

}

void LIBPRO::signUp() {
	regist = new RegisterForm(this);
	regist->show();
}

void LIBPRO::forgotPass() {
	dialog = new ForgotPass(this);
	dialog->show();
}

void LIBPRO::on_adminButton_clicked() {
	ad = new adminmenu(this);
	ad->show();
	ui.stackedWidget->setCurrentIndex(0);
}

void LIBPRO::on_libButton_clicked() {
	libmenu = new Libmenu(this);
	libmenu->show();
	ui.stackedWidget->setCurrentIndex(0);
}

void LIBPRO::on_userButton_clicked() {
	usermenu = new UserMenu(this);
	usermenu->show();
	ui.stackedWidget->setCurrentIndex(0);
}
