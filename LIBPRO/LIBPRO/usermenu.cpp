#include "usermenu.h"
#include "Features.h"
#include <qmessagebox.h>
#include <qstring.h>
#include <qinputdialog.h>

UserMenu::UserMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.searchLine->setPlaceholderText("Search for Books");
	ui.stackedWidget->setCurrentIndex(0);

}

UserMenu::~UserMenu()
{
}

// these  function for changing between multiwindow
void UserMenu::on_findBookButton_clicked() {
	ui.stackedWidget->setCurrentIndex(1);
}

void UserMenu::on_historyButton_clicked() {
	ui.stackedWidget->setCurrentIndex(2);
}

void UserMenu::on_profileButton_clicked() {
	ui.stackedWidget->setCurrentIndex(2);
}

void UserMenu::on_returnButton_clicked() {
	ui.stackedWidget->setCurrentIndex(0);
}

void UserMenu::on_returnButton2_clicked() {
	ui.stackedWidget->setCurrentIndex(0);
}

// these function use in the profile information group box
void UserMenu::on_changeButton_clicked() {
	ui.saveButton->setEnabled(true);
	ui.linePass_info->setReadOnly(false);
	ui.linePhone_info->setReadOnly(false);
	ui.note_info->setReadOnly(false);
}

void UserMenu::on_saveButton_clicked() {
	bool haveChangedPass = ui.linePass_info->isModified();
	bool haveChangedPhone = ui.linePhone_info->isModified();
	if (haveChangedPass) {
		if (!checkValidString(ui.linePass_info->text())) {
			QMessageBox::warning(this, "Invalid", "Password is not valid");
			return;
		}
		QString passConfirm = QInputDialog::getText(this, "Confirm Password", "Please confirm your password: ", QLineEdit::Password);
		bool equal = (ui.linePass_info->text() == passConfirm); // compare user changes password with passConfirm.toString()
		if (equal) {
			//set new password in here or go down :v it's up to you

			ui.linePass_info->setModified(false);
		}
		else {
			QMessageBox::warning(this, "Not correct", "Password does not match");
			return;
		}
	}
	if (haveChangedPhone) {
		if (!checkValidPhone(ui.linePhone_info->text())) {
			QMessageBox::warning(this, "Invalid", "Phone number is not valid");
			return;
		}
	}
	if (haveChangedPass || haveChangedPhone) {
		if (QMessageBox::Yes == QMessageBox::question(this, "Save changes", "Do you want to save your changes?")) {
			//set new user information in here

			// return to previous state
			ui.saveButton->setEnabled(false);
			ui.linePass_info->setReadOnly(true);
			ui.linePhone_info->setReadOnly(true);
			ui.note_info->setReadOnly(true);
		}
	}
}