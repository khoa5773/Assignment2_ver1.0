#include "accountdetailwidget.h"

accountDetailWidget::accountDetailWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.accountImg->setScaledContents(true);
}

accountDetailWidget::~accountDetailWidget()
{
}

void accountDetailWidget::loadAcountWidget(QString role, QString nickname, QString studentID, QString username, QString phone, QString mail, QString available) {
	ui.accountImg->setPixmap(":/LIBPRO/"+role+".png");
	ui.accountName->setText(nickname + " - " + studentID);
	ui.username->setText("Username: " + username);
	ui.number->setText("Phone: " + phone + " - " + "Email: " + mail);
	if (!compareString(available, "1"))
		ui.status->setEnabled(false);
	else ui.status->setEnabled(true);
	if (checkAccAvailable(username)) {
		ui.block->setEnabled(true);
		ui.unblock->setEnabled(false);
	}else {
		ui.block->setEnabled(false);
		ui.unblock->setEnabled(true);
	}
	if (compareString(role, "G")) {
		ui.promote->setEnabled(true);
		ui.resetpass->setEnabled(true);
		ui.demote->setEnabled(false);
	}
	else if(compareString(role,"A")){
		ui.promote->setEnabled(false);
		ui.resetpass->setEnabled(false);
		ui.demote->setEnabled(true);
	}
	else {
		ui.promote->setEnabled(false);
		ui.resetpass->setEnabled(false);
		ui.demote->setEnabled(true);
	}
}

void accountDetailWidget::on_block_clicked() {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("update account set available = '0' where binary user_name = (?)");
	pstmt->setString(1, ui.username->text().remove(0,10).toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
		ui.status->setEnabled(false);
	ui.block->setEnabled(false);
	ui.unblock->setEnabled(true);
}

void accountDetailWidget::on_unblock_clicked() {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("update account set available = '1' where binary user_name = (?)");
	pstmt->setString(1, ui.username->text().remove(0,10).toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
		ui.status->setEnabled(true);
	ui.block->setEnabled(true);
	ui.unblock->setEnabled(false);
}

void accountDetailWidget::on_demote_clicked() {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("update account set user_id = 'G' where binary user_name = (?)");
	pstmt->setString(1, ui.username->text().remove(0, 10).toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
		ui.accountImg->setPixmap(":/LIBPRO/" + getRole(ui.username->text().remove(0, 10)) + ".png");
	ui.demote->setEnabled(false);
	ui.promote->setEnabled(true);
	ui.resetpass->setEnabled(true);
}

void accountDetailWidget::on_promote_clicked() {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("update account set user_id = 'A' where binary user_name = (?)");
	pstmt->setString(1, ui.username->text().remove(0, 10).toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
		ui.accountImg->setPixmap(":/LIBPRO/" + getRole(ui.username->text().remove(0, 10)) + ".png");
	ui.demote->setEnabled(true);
	ui.resetpass->setEnabled(false);
	ui.promote->setEnabled(false);
}

void accountDetailWidget::on_resetpass_clicked() {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("update account set user_id = 'L' where binary user_name = (?)");
	pstmt->setString(1, ui.username->text().remove(0, 10).toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
		ui.accountImg->setPixmap(":/LIBPRO/" + getRole(ui.username->text().remove(0, 10)) + ".png");
	ui.demote->setEnabled(true);
	ui.promote->setEnabled(false);
	ui.resetpass->setEnabled(false);
}

void accountDetailWidget::on_remove_clicked() {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("delete from account where binary user_name = (?)");
	pstmt->setString(1, ui.username->text().remove(0, 10).toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
		close();
}