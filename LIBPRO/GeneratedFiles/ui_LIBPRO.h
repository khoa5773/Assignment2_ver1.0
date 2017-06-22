/********************************************************************************
** Form generated from reading UI file 'LIBPRO.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBPRO_H
#define UI_LIBPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LIBPROClass
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QPushButton *pushButtonRegister;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_pass;
    QPushButton *pushButtonLogin;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButtonForgotPass;
    QLabel *label_7;
    QLabel *label_2;
    QWidget *chooseRole;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *userButton;
    QPushButton *adminButton;
    QPushButton *libButton;
    QLabel *label_6;

    void setupUi(QMainWindow *LIBPROClass)
    {
        if (LIBPROClass->objectName().isEmpty())
            LIBPROClass->setObjectName(QStringLiteral("LIBPROClass"));
        LIBPROClass->resize(1280, 907);
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LIBPROClass->setWindowIcon(icon);
        LIBPROClass->setStyleSheet(QLatin1String("#centralWidget{	\n"
"border-image: url(:/LIBPRO/IMG_0299.jpg);\n"
"}\n"
"\n"
"\n"
"#pushButtonForgotPass:hover {\n"
"    text-color: red;\n"
"    color: red;\n"
"}\n"
"\n"
"#pushButtonRegister:hover {\n"
"    text-color: red;\n"
"    color: red;\n"
"}\n"
"\n"
"   "));
        centralWidget = new QWidget(LIBPROClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1280, 907));
        stackedWidget->setStyleSheet(QLatin1String("#loginPage{\n"
"border-image: url(:/LIBPRO/19249875_1852279541766421_1585598154_o.jpg);\n"
"}\n"
"\n"
"#chooseRole{\n"
"border-image: url(:/LIBPRO/pattern-5_blur.png);\n"
"}\n"
"\n"
"QPushButton {\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));\n"
"	/*background-color: rgba(255,255,255,0.5);*/\n"
"}\n"
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
"#pushButtonLogin::hover{\n"
"background:rgba(82, 191, 162,0.8);\n"
"}"));
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        pushButtonRegister = new QPushButton(loginPage);
        pushButtonRegister->setObjectName(QStringLiteral("pushButtonRegister"));
        pushButtonRegister->setGeometry(QRect(450, 660, 151, 31));
        QFont font;
        font.setFamily(QStringLiteral("Gadugi"));
        font.setPointSize(9);
        font.setUnderline(true);
        pushButtonRegister->setFont(font);
        pushButtonRegister->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonRegister->setMouseTracking(true);
        pushButtonRegister->setStyleSheet(QLatin1String("border:0px;\n"
"text-align: left;\n"
"background:none;"));
        lineEdit_user = new QLineEdit(loginPage);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(470, 380, 321, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Cambria"));
        font1.setPointSize(18);
        lineEdit_user->setFont(font1);
        lineEdit_user->setStyleSheet(QLatin1String("#lineEdit_user{\n"
"border-radius: 10px;\n"
"    padding: 70px;\n"
"    width: 200px;\n"
"    height: 150px;\n"
"background: rgba(255, 255, 255,0.8)\n"
"}\n"
"#lineEdit_user::placeholder {\n"
"  border: #000;\n"
"  padding: 10px;\n"
"  font-size: 1.2em;\n"
"  width: 100%;\n"
"}"));
        lineEdit_pass = new QLineEdit(loginPage);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));
        lineEdit_pass->setGeometry(QRect(470, 460, 321, 71));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_pass->sizePolicy().hasHeightForWidth());
        lineEdit_pass->setSizePolicy(sizePolicy);
        lineEdit_pass->setFont(font1);
        lineEdit_pass->setStyleSheet(QLatin1String("#lineEdit_pass{\n"
"border-radius: 10px;\n"
"    padding: 70px;\n"
"    width: 200px;\n"
"    height: 150px;\n"
"background: rgba(255, 255, 255,0.8)\n"
"}\n"
"#lineEdit_pass::placeholder {\n"
"  border: #000;\n"
"  padding: 10px;\n"
"  font-size: 1.2em;\n"
"  width: 100%;\n"
"opacity: 0.5;\n"
"}"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);
        pushButtonLogin = new QPushButton(loginPage);
        pushButtonLogin->setObjectName(QStringLiteral("pushButtonLogin"));
        pushButtonLogin->setGeometry(QRect(550, 550, 161, 71));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(128);
        sizePolicy1.setVerticalStretch(90);
        sizePolicy1.setHeightForWidth(pushButtonLogin->sizePolicy().hasHeightForWidth());
        pushButtonLogin->setSizePolicy(sizePolicy1);
        QFont font2;
        pushButtonLogin->setFont(font2);
        pushButtonLogin->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonLogin->setMouseTracking(true);
        pushButtonLogin->setStyleSheet(QLatin1String("background:rgba(82, 191, 162,0.3);\n"
"    border: none;\n"
"    color:black;\n"
"    padding: 25px 32px;\n"
"    text-align: center;\n"
"    font-size: 20px;\n"
"border-radius: 35px;"));
        label = new QLabel(loginPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 390, 51, 51));
        label->setStyleSheet(QLatin1String("border-image: url(:/LIBPRO/user.png);\n"
"\n"
"opacity: 0.0;\n"
""));
        label_3 = new QLabel(loginPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 840, 191, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Gadugi"));
        font3.setPointSize(10);
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("Designed by Qt"));
        label_3->setTextFormat(Qt::PlainText);
        label_3->setOpenExternalLinks(true);
        pushButtonForgotPass = new QPushButton(loginPage);
        pushButtonForgotPass->setObjectName(QStringLiteral("pushButtonForgotPass"));
        pushButtonForgotPass->setGeometry(QRect(450, 680, 191, 41));
        pushButtonForgotPass->setFont(font);
        pushButtonForgotPass->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonForgotPass->setMouseTracking(true);
        pushButtonForgotPass->setStyleSheet(QLatin1String("border:0px;\n"
"text-align: left;\n"
"background:transparent;"));
        label_7 = new QLabel(loginPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(480, 470, 51, 51));
        label_7->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/images.png);"));
        label_2 = new QLabel(loginPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(990, 700, 251, 161));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/appstore-icon-mobile-retina.png);"));
        stackedWidget->addWidget(loginPage);
        chooseRole = new QWidget();
        chooseRole->setObjectName(QStringLiteral("chooseRole"));
        label_4 = new QLabel(chooseRole);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(530, 590, 261, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Futura"));
        font4.setPointSize(20);
        label_4->setFont(font4);
        label_4->setStyleSheet(QStringLiteral("color: #1b3c8e"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(chooseRole);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(920, 570, 261, 51));
        label_5->setFont(font4);
        label_5->setStyleSheet(QStringLiteral("color: #1b3c8e"));
        label_5->setAlignment(Qt::AlignCenter);
        userButton = new QPushButton(chooseRole);
        userButton->setObjectName(QStringLiteral("userButton"));
        userButton->setGeometry(QRect(900, 250, 300, 300));
        userButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/LIBPRO/G.png"), QSize(), QIcon::Normal, QIcon::Off);
        userButton->setIcon(icon1);
        userButton->setIconSize(QSize(250, 250));
        adminButton = new QPushButton(chooseRole);
        adminButton->setObjectName(QStringLiteral("adminButton"));
        adminButton->setGeometry(QRect(130, 250, 300, 300));
        adminButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/LIBPRO/A.png"), QSize(), QIcon::Normal, QIcon::Off);
        adminButton->setIcon(icon2);
        adminButton->setIconSize(QSize(250, 250));
        libButton = new QPushButton(chooseRole);
        libButton->setObjectName(QStringLiteral("libButton"));
        libButton->setGeometry(QRect(510, 250, 300, 300));
        libButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/LIBPRO/L.png"), QSize(), QIcon::Normal, QIcon::Off);
        libButton->setIcon(icon3);
        libButton->setIconSize(QSize(250, 250));
        label_6 = new QLabel(chooseRole);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 580, 271, 41));
        label_6->setFont(font4);
        label_6->setStyleSheet(QStringLiteral("color: #1b3c8e"));
        label_6->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(chooseRole);
        LIBPROClass->setCentralWidget(centralWidget);

        retranslateUi(LIBPROClass);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LIBPROClass);
    } // setupUi

    void retranslateUi(QMainWindow *LIBPROClass)
    {
        LIBPROClass->setWindowTitle(QApplication::translate("LIBPROClass", "LIBPRO", Q_NULLPTR));
        pushButtonRegister->setText(QApplication::translate("LIBPROClass", "You don't have an account?", Q_NULLPTR));
        lineEdit_user->setPlaceholderText(QApplication::translate("LIBPROClass", "Username", Q_NULLPTR));
        lineEdit_pass->setPlaceholderText(QApplication::translate("LIBPROClass", "Password", Q_NULLPTR));
        pushButtonLogin->setText(QApplication::translate("LIBPROClass", "SIGN IN", Q_NULLPTR));
        label->setText(QString());
#ifndef QT_NO_WHATSTHIS
        label_3->setWhatsThis(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic;\">Designed by </span><a href=\"https://www.qt.io/\"><span style=\" text-decoration: underline; color:#0000ff;\">Qt</span></a></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("LIBPROClass", "Copyright TM", Q_NULLPTR));
        pushButtonForgotPass->setText(QApplication::translate("LIBPROClass", "You have forgotten your password?", Q_NULLPTR));
        label_7->setText(QString());
        label_2->setText(QString());
        label_4->setText(QApplication::translate("LIBPROClass", "Libarian", Q_NULLPTR));
        label_5->setText(QApplication::translate("LIBPROClass", "User", Q_NULLPTR));
        userButton->setText(QString());
        adminButton->setText(QString());
        libButton->setText(QString());
        label_6->setText(QApplication::translate("LIBPROClass", "Administrator", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LIBPROClass: public Ui_LIBPROClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBPRO_H
