/********************************************************************************
** Form generated from reading UI file 'noticewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICEWIDGET_H
#define UI_NOTICEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_noticeWidget
{
public:
    QLabel *img;
    QLabel *code;
    QLabel *bookname;
    QLabel *username;
    QLabel *time;
    QFrame *line;
    QCommandLinkButton *no;
    QCommandLinkButton *yes;

    void setupUi(QWidget *noticeWidget)
    {
        if (noticeWidget->objectName().isEmpty())
            noticeWidget->setObjectName(QStringLiteral("noticeWidget"));
        noticeWidget->resize(1180, 200);
        img = new QLabel(noticeWidget);
        img->setObjectName(QStringLiteral("img"));
        img->setGeometry(QRect(0, 0, 151, 181));
        code = new QLabel(noticeWidget);
        code->setObjectName(QStringLiteral("code"));
        code->setGeometry(QRect(160, 0, 691, 21));
        QFont font;
        font.setFamily(QStringLiteral("Gadugi"));
        font.setPointSize(12);
        code->setFont(font);
        bookname = new QLabel(noticeWidget);
        bookname->setObjectName(QStringLiteral("bookname"));
        bookname->setGeometry(QRect(160, 20, 691, 51));
        QFont font1;
        bookname->setFont(font1);
        bookname->setStyleSheet(QStringLiteral("font-size:20px;"));
        username = new QLabel(noticeWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(160, 70, 321, 51));
        username->setFont(font);
        time = new QLabel(noticeWidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(160, 150, 581, 31));
        time->setFont(font);
        line = new QFrame(noticeWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 190, 1180, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        no = new QCommandLinkButton(noticeWidget);
        no->setObjectName(QStringLiteral("no"));
        no->setGeometry(QRect(1050, 60, 61, 71));
        no->setCursor(QCursor(Qt::PointingHandCursor));
        no->setMouseTracking(true);
        no->setStyleSheet(QStringLiteral("background:transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/Alecive-Flatwoken-Apps-Dialog-Close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        no->setIcon(icon);
        no->setIconSize(QSize(50, 50));
        yes = new QCommandLinkButton(noticeWidget);
        yes->setObjectName(QStringLiteral("yes"));
        yes->setGeometry(QRect(970, 60, 71, 71));
        yes->setCursor(QCursor(Qt::PointingHandCursor));
        yes->setMouseTracking(true);
        yes->setStyleSheet(QStringLiteral("background:transparent;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/LIBPRO/Alecive-Flatwoken-Apps-Dialog-Apply.ico"), QSize(), QIcon::Normal, QIcon::Off);
        yes->setIcon(icon1);
        yes->setIconSize(QSize(50, 50));

        retranslateUi(noticeWidget);

        QMetaObject::connectSlotsByName(noticeWidget);
    } // setupUi

    void retranslateUi(QWidget *noticeWidget)
    {
        noticeWidget->setWindowTitle(QApplication::translate("noticeWidget", "noticeWidget", Q_NULLPTR));
        img->setText(QString());
        code->setText(QString());
        bookname->setText(QString());
        username->setText(QString());
        time->setText(QString());
        no->setText(QString());
        yes->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class noticeWidget: public Ui_noticeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICEWIDGET_H
