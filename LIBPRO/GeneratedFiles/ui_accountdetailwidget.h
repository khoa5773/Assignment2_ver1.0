/********************************************************************************
** Form generated from reading UI file 'accountdetailwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTDETAILWIDGET_H
#define UI_ACCOUNTDETAILWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountDetailWidget
{
public:
    QLabel *accountImg;
    QLabel *accountName;
    QLabel *username;
    QLabel *number;
    QPushButton *unblock;
    QPushButton *promote;
    QPushButton *block;
    QPushButton *resetpass;
    QPushButton *demote;
    QPushButton *remove;
    QLabel *label;
    QFrame *line;
    QCommandLinkButton *status;

    void setupUi(QWidget *accountDetailWidget)
    {
        if (accountDetailWidget->objectName().isEmpty())
            accountDetailWidget->setObjectName(QStringLiteral("accountDetailWidget"));
        accountDetailWidget->resize(1120, 200);
        accountDetailWidget->setStyleSheet(QLatin1String("QPushButton {	\n"
"	border-radius: 20px;\n"
"	background-color: qlineargradient(spread:reflect, x1:0.669951, y1:0.727273, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 rgb(212, 236, 215));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"\n"
"#accountDetailWidget{\n"
"background : transparent;\n"
"}"));
        accountImg = new QLabel(accountDetailWidget);
        accountImg->setObjectName(QStringLiteral("accountImg"));
        accountImg->setGeometry(QRect(0, 0, 150, 191));
        accountImg->setStyleSheet(QStringLiteral(""));
        accountName = new QLabel(accountDetailWidget);
        accountName->setObjectName(QStringLiteral("accountName"));
        accountName->setGeometry(QRect(150, 0, 940, 50));
        QFont font;
        accountName->setFont(font);
        accountName->setStyleSheet(QStringLiteral("font-size:20px;"));
        username = new QLabel(accountDetailWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(150, 50, 391, 50));
        username->setFont(font);
        username->setStyleSheet(QStringLiteral("font-size: 12px;"));
        number = new QLabel(accountDetailWidget);
        number->setObjectName(QStringLiteral("number"));
        number->setGeometry(QRect(150, 150, 541, 40));
        number->setFont(font);
        number->setStyleSheet(QStringLiteral("font-size: 12px;"));
        unblock = new QPushButton(accountDetailWidget);
        unblock->setObjectName(QStringLiteral("unblock"));
        unblock->setGeometry(QRect(700, 140, 120, 40));
        QFont font1;
        font1.setPointSize(12);
        unblock->setFont(font1);
        unblock->setCursor(QCursor(Qt::PointingHandCursor));
        unblock->setMouseTracking(true);
        promote = new QPushButton(accountDetailWidget);
        promote->setObjectName(QStringLiteral("promote"));
        promote->setGeometry(QRect(830, 80, 120, 40));
        promote->setFont(font1);
        promote->setCursor(QCursor(Qt::PointingHandCursor));
        promote->setMouseTracking(true);
        block = new QPushButton(accountDetailWidget);
        block->setObjectName(QStringLiteral("block"));
        block->setGeometry(QRect(700, 80, 120, 40));
        block->setFont(font1);
        block->setCursor(QCursor(Qt::PointingHandCursor));
        block->setMouseTracking(true);
        resetpass = new QPushButton(accountDetailWidget);
        resetpass->setObjectName(QStringLiteral("resetpass"));
        resetpass->setGeometry(QRect(970, 80, 120, 40));
        resetpass->setFont(font1);
        resetpass->setCursor(QCursor(Qt::PointingHandCursor));
        resetpass->setMouseTracking(true);
        demote = new QPushButton(accountDetailWidget);
        demote->setObjectName(QStringLiteral("demote"));
        demote->setGeometry(QRect(830, 140, 120, 40));
        demote->setFont(font1);
        demote->setCursor(QCursor(Qt::PointingHandCursor));
        demote->setMouseTracking(true);
        remove = new QPushButton(accountDetailWidget);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setGeometry(QRect(970, 140, 120, 40));
        remove->setFont(font1);
        remove->setCursor(QCursor(Qt::PointingHandCursor));
        remove->setMouseTracking(true);
        label = new QLabel(accountDetailWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 100, 421, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Gadugi"));
        font2.setPointSize(12);
        label->setFont(font2);
        line = new QFrame(accountDetailWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 195, 1121, 2));
        line->setStyleSheet(QStringLiteral("background: rgba(0,0,0,0.1);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        status = new QCommandLinkButton(accountDetailWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(1000, 0, 61, 71));
        status->setStyleSheet(QLatin1String("background: transparent;\n"
"border:none;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/Saviourmachine-Chat-Online.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral("Saviourmachine-Chat-Online-red.ico"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QStringLiteral("Saviourmachine-Chat-Online-red.ico"), QSize(), QIcon::Disabled, QIcon::On);
        status->setIcon(icon);
        status->setIconSize(QSize(50, 80));

        retranslateUi(accountDetailWidget);

        QMetaObject::connectSlotsByName(accountDetailWidget);
    } // setupUi

    void retranslateUi(QWidget *accountDetailWidget)
    {
        accountDetailWidget->setWindowTitle(QApplication::translate("accountDetailWidget", "accountDetailWidget", Q_NULLPTR));
        accountImg->setText(QString());
        accountName->setText(QString());
        username->setText(QString());
        number->setText(QString());
        unblock->setText(QApplication::translate("accountDetailWidget", "Unblock", Q_NULLPTR));
        promote->setText(QApplication::translate("accountDetailWidget", "Promote AD", Q_NULLPTR));
        block->setText(QApplication::translate("accountDetailWidget", "Block", Q_NULLPTR));
        resetpass->setText(QApplication::translate("accountDetailWidget", "Promote Lib", Q_NULLPTR));
        demote->setText(QApplication::translate("accountDetailWidget", "Demote", Q_NULLPTR));
        remove->setText(QApplication::translate("accountDetailWidget", "Remove", Q_NULLPTR));
        label->setText(QApplication::translate("accountDetailWidget", "Password: **********", Q_NULLPTR));
        status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class accountDetailWidget: public Ui_accountDetailWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTDETAILWIDGET_H
