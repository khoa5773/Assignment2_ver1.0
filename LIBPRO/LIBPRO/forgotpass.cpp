#include "forgotpass.h"
#include <qmessagebox.h>

ForgotPass::ForgotPass(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void ForgotPass::on_resetButton_clicked() {
	QString user = ui.lineUser->text();
	QString phone = ui.linePhone->text();
	QString pass = "admin";
	if (resetPassword(user, phone, pass)) {
		QMessageBox::information(this, "Reset Password Success", "Your password have been changed successfully");
	}
	else QMessageBox::information(this, "Reset Password Failed", "Failed");
}

ForgotPass::~ForgotPass()
{
}
