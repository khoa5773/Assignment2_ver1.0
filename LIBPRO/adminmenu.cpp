#include "adminmenu.h"

adminmenu::adminmenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.stackedWidget->setCurrentIndex(0);
	QObject::connect(ui.searchLine, SIGNAL(returnPressed()), ui.searchButton, SIGNAL(clicked()));
	setupAccountWidget("%");
}

adminmenu::~adminmenu()
{
}

void adminmenu::destroyAcountWidget() {
	QLayoutItem *item;
	while ((item = ui.verticalLayout_2->takeAt(0))) {
		if (item->widget()) {
			delete item->widget();
		}
		delete item;
	}
}

void adminmenu::setupAccountWidget(QString key) {
	key = "%" + key + "%";
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("select * from account where user_name like (?) and user_id != 'B' order by user_name");
	pstmt->setString(1, key.toLocal8Bit().constData());
	res = pstmt->executeQuery();
	while (res->next()) {
		QString username = res->getString("user_name").c_str();
		QString role = res->getString("user_id").c_str();
		QString name = res->getString("nickname").c_str();
		QString phone = res->getString("phone").c_str();
		QString studentid = res->getString("student_ID").c_str();
		QString email = res->getString("email").c_str();
		QString avai = res->getString("available").c_str();
		accountDetailWidget* acc = new accountDetailWidget();
		acc->loadAcountWidget(role, name, studentid, username, phone, email, avai);
		acc->setFixedSize(1100, 210);
		ui.verticalLayout_2->addWidget(acc);
		ui.verticalLayout_2->addStretch(1);
	}
	delete pstmt;
	delete res;
	DISCONNECTDB
}

void adminmenu::setupAccountWidget(QString key, QString role) {
	key = "%" + key + "%";
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("select * from account where user_name like (?) and user_id = (?) order by user_name");
	pstmt->setString(1, key.toLocal8Bit().constData());
	pstmt->setString(2, role.toLocal8Bit().constData());
	res = pstmt->executeQuery();
	while (res->next()) {
		QString username = res->getString("user_name").c_str();
		QString role = res->getString("user_id").c_str();
		QString name = res->getString("nickname").c_str();
		QString phone = res->getString("phone").c_str();
		QString studentid = res->getString("student_ID").c_str();
		QString email = res->getString("email").c_str();
		QString avai = res->getString("available").c_str();
		accountDetailWidget* acc = new accountDetailWidget();
		acc->loadAcountWidget(role, name, studentid, username, phone, email, avai);
		acc->setFixedSize(1100, 210);
		ui.verticalLayout_2->addWidget(acc);
		ui.verticalLayout_2->addStretch(1);
	}
	delete pstmt;
	delete res;
	DISCONNECTDB
}

void adminmenu::on_Account_clicked() {
	ui.stackedWidget->setCurrentIndex(1);
}

void adminmenu::on_chooseRole_clicked() {

}

void adminmenu::on_searchButton_clicked() {
	destroyAcountWidget();
	//setupAccountWidget(ui.searchLine->text());
	if (ui.checkUser->isChecked()) {
		setupAccountWidget(ui.searchLine->text(), "G");
	}
	if (ui.checkLib->isChecked()) {
		setupAccountWidget(ui.searchLine->text(), "L");
	}
	if (ui.checkAd->isChecked()) {
		setupAccountWidget(ui.searchLine->text(), "A");
	}
}

void adminmenu::on_checkUser_stateChanged(int state) {
	destroyAcountWidget();
	if (state) {
		setupAccountWidget(ui.searchLine->text(), "G");
	}
	if (ui.checkLib->isChecked()) {
		setupAccountWidget(ui.searchLine->text(), "L");
	}
	if (ui.checkAd->isChecked()) {
		setupAccountWidget(ui.searchLine->text(), "A");
	}
}

void adminmenu::on_checkAd_stateChanged(int state) {
	destroyAcountWidget();
	if (ui.checkUser->isChecked()) {
		setupAccountWidget(ui.searchLine->text(), "G");
	}
	if (ui.checkLib->isChecked()) {
		setupAccountWidget(ui.searchLine->text(), "L");
	}
	if (state) {
		setupAccountWidget(ui.searchLine->text(), "A");
	}
}
void adminmenu::on_checkLib_stateChanged(int state) {
	destroyAcountWidget();
	if (ui.checkUser->isChecked()) {
		setupAccountWidget(ui.searchLine->text(), "G");
	}
	if (state) {
		setupAccountWidget(ui.searchLine->text(), "L");
	}
	if (ui.checkAd->isChecked()) {
		setupAccountWidget(ui.searchLine->text(), "A");
	}
}

void adminmenu::on_addUser_clicked() {
	reg = new RegisterForm(this);
	reg->show();
}

void adminmenu::on_logoutButton_clicked() {
	close();
}