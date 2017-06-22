/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminmenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *accountDetail;
    QCommandLinkButton *searchButton;
    QLineEdit *searchLine;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkUser;
    QCheckBox *checkLib;
    QCheckBox *checkAd;
    QPushButton *aboutButton;
    QPushButton *logoutButton;
    QPushButton *addUser;

    void setupUi(QWidget *adminmenu)
    {
        if (adminmenu->objectName().isEmpty())
            adminmenu->setObjectName(QStringLiteral("adminmenu"));
        adminmenu->resize(1280, 907);
        stackedWidget = new QStackedWidget(adminmenu);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -4, 1280, 907));
        stackedWidget->setStyleSheet(QLatin1String("#stackedWidget{\n"
"	\n"
"	border-image: url(:/LIBPRO/pattern-5_blur.png);\n"
"}\n"
"\n"
"QPushButton {	\n"
"	font-family: \"Silom\";\n"
"	color: #145acc;\n"
"	border: 2px solid grey;	\n"
"	border-radius: 15px;\n"
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
"\n"
"QLineEdit {\n"
"	border: 1px solid grey;\n"
"	border-radius: 7px;\n"
"    padding: 10px;\n"
"    width: 200px;\n"
"    height: 150px;\n"
"}\n"
"\n"
"QLabel {\n"
"	color: #646568;\n"
"	font-size: 14px;\n"
"	font-weight: bold;\n"
"	font-family: \"Bangla Sangam MN\";\n"
"}"));
        accountDetail = new QWidget();
        accountDetail->setObjectName(QStringLiteral("accountDetail"));
        searchButton = new QCommandLinkButton(accountDetail);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(750, 90, 51, 61));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setMouseTracking(true);
        searchButton->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 15px;\n"
"background: transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral("search_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);
        searchButton->setIconSize(QSize(40, 60));
        searchLine = new QLineEdit(accountDetail);
        searchLine->setObjectName(QStringLiteral("searchLine"));
        searchLine->setGeometry(QRect(60, 100, 691, 41));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Calligraphy"));
        font.setPointSize(18);
        searchLine->setFont(font);
        searchLine->setFocusPolicy(Qt::StrongFocus);
        searchLine->setClearButtonEnabled(true);
        scrollArea = new QScrollArea(accountDetail);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(60, 180, 1150, 661));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1150, 661));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        checkUser = new QCheckBox(accountDetail);
        checkUser->setObjectName(QStringLiteral("checkUser"));
        checkUser->setGeometry(QRect(810, 100, 101, 41));
        QFont font1;
        font1.setPointSize(18);
        checkUser->setFont(font1);
        checkUser->setCursor(QCursor(Qt::PointingHandCursor));
        checkUser->setIconSize(QSize(100, 100));
        checkUser->setChecked(true);
        checkLib = new QCheckBox(accountDetail);
        checkLib->setObjectName(QStringLiteral("checkLib"));
        checkLib->setGeometry(QRect(940, 100, 141, 41));
        checkLib->setFont(font1);
        checkLib->setCursor(QCursor(Qt::PointingHandCursor));
        checkLib->setIconSize(QSize(50, 50));
        checkLib->setChecked(true);
        checkAd = new QCheckBox(accountDetail);
        checkAd->setObjectName(QStringLiteral("checkAd"));
        checkAd->setGeometry(QRect(1110, 100, 101, 41));
        checkAd->setFont(font1);
        checkAd->setCursor(QCursor(Qt::PointingHandCursor));
        checkAd->setIconSize(QSize(100, 16));
        checkAd->setChecked(true);
        aboutButton = new QPushButton(accountDetail);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(1030, 20, 101, 71));
        aboutButton->setCursor(QCursor(Qt::PointingHandCursor));
        aboutButton->setMouseTracking(true);
        aboutButton->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/LIBPRO/Alecive-Flatwoken-Apps-Help-Info.ico"), QSize(), QIcon::Normal, QIcon::Off);
        aboutButton->setIcon(icon1);
        aboutButton->setIconSize(QSize(70, 70));
        logoutButton = new QPushButton(accountDetail);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setGeometry(QRect(1130, 20, 91, 71));
        logoutButton->setCursor(QCursor(Qt::PointingHandCursor));
        logoutButton->setMouseTracking(true);
        logoutButton->setStyleSheet(QLatin1String("background: transparent;\n"
"border:none;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("power-button-md.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon2);
        logoutButton->setIconSize(QSize(70, 70));
        addUser = new QPushButton(accountDetail);
        addUser->setObjectName(QStringLiteral("addUser"));
        addUser->setGeometry(QRect(60, 20, 91, 71));
        addUser->setCursor(QCursor(Qt::PointingHandCursor));
        addUser->setMouseTracking(true);
        addUser->setStyleSheet(QLatin1String("background: transparent;\n"
"border:none;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/LIBPRO/Ampeross-Qetto-2-Add-contact.ico"), QSize(), QIcon::Normal, QIcon::Off);
        addUser->setIcon(icon3);
        addUser->setIconSize(QSize(70, 70));
        stackedWidget->addWidget(accountDetail);

        retranslateUi(adminmenu);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(adminmenu);
    } // setupUi

    void retranslateUi(QWidget *adminmenu)
    {
        adminmenu->setWindowTitle(QApplication::translate("adminmenu", "adminmenu", Q_NULLPTR));
        searchButton->setText(QString());
        searchLine->setText(QString());
        searchLine->setPlaceholderText(QApplication::translate("adminmenu", "Search account", Q_NULLPTR));
        checkUser->setText(QApplication::translate("adminmenu", "User", Q_NULLPTR));
        checkLib->setText(QApplication::translate("adminmenu", "Librarian", Q_NULLPTR));
        checkAd->setText(QApplication::translate("adminmenu", "Admin", Q_NULLPTR));
        aboutButton->setText(QString());
        logoutButton->setText(QString());
        addUser->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminmenu: public Ui_adminmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
