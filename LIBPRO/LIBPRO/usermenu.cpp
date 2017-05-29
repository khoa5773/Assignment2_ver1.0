#include "usermenu.h"
#include "Features.h"
#include "LIBPRO.h"
#include <qmessagebox.h>
#include <qstring.h>
#include <qinputdialog.h>

UserMenu::UserMenu(QString name, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	user = new QString(name);

	ui.searchLine->setPlaceholderText("Search for Books");
	ui.stackedWidget->setCurrentIndex(0);
	ui.stackedWidget->setStyleSheet(QLatin1String("#stackedWidget {	\n"
			"	border-image: url(:/LIBPRO/usermenu.png);\n"
			"}"));
	ui.searchButton->setStyleSheet(QLatin1String("#searchButton {	\n"
		"	border-image: url(:/LIBPRO/search_icon.png);\n"
		"}"));
}

UserMenu::~UserMenu()
{
}

// these  function for changing between multiwindow
void UserMenu::on_findBookButton_clicked() {
	ui.stackedWidget->setCurrentIndex(1);
}

void UserMenu::on_historyButton_clicked() {
	ui.lineUser_info->setText(getUser_now());
	ui.linePass_info->setText(getPass_now());
	ui.linePhone_info->setText(getPhone_now());
	ui.stackedWidget->setCurrentIndex(2);
}

void UserMenu::on_profileButton_clicked() {
	ui.lineUser_info->setText(getUser_now());
	ui.linePass_info->setText(getPass_now());
	ui.linePhone_info->setText(getPhone_now());
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
		if (compareString(ui.linePass_info->text(),passConfirm)) {
			resetPassword(ui.lineUser_info->text(), ui.linePass_info->text());
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
		else {
			changePhone(ui.lineUser_info->text(), ui.linePhone_info->text());
			QMessageBox::warning(this, "Success", "Phonenumber has been changed");
		}
	}
	if (haveChangedPass || haveChangedPhone) {
		if (QMessageBox::Yes == QMessageBox::question(this, "Save changes", "Do you want to save your changes?")) {
			ui.saveButton->setEnabled(false);
			ui.linePass_info->setReadOnly(true);
			ui.linePhone_info->setReadOnly(true);
			ui.note_info->setReadOnly(true);
		}
	}
}

//fucntion on search book page

void UserMenu::on_searchButton_clicked() {
	ui.listWidget_2->clear();
	QString keyw = '%' + ui.searchLine->text() + '%';
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("call book_admin.searchBook(?)");
	pstmt->setString(1, keyw.toLocal8Bit().constData());
	res = pstmt->executeQuery();
	while (res->next()) {
		QString findedBook = res->getString("book_name").c_str();
		QListWidgetItem* item = new QListWidgetItem();
		item->setText(findedBook);
		ui.listWidget_2->addItem(item);
	}
	delete pstmt;
	delete res;
	DISCONNECTDB
}

void UserMenu::on_listWidget_2_itemClicked() {
	ui.addButton->setEnabled(true);
	ui.listWidget_2->setCurrentItem(ui.listWidget_2->currentItem());
}

void UserMenu::on_addButton_clicked() {
	QListWidgetItem* itemAdd = new QListWidgetItem();
	itemAdd = ui.listWidget_2->currentItem()->clone();
	ui.listWidget_3->addItem(itemAdd);
}

void UserMenu::on_listWidget_3_itemClicked() {
	ui.removeButton->setEnabled(true);
}

void UserMenu::on_removeButton_clicked() {
	ui.listWidget_3->currentItem()->~QListWidgetItem();
	ui.removeButton->setEnabled(false);
}