/********************************************************************************
** Form generated from reading UI file 'requestingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTINGWIDGET_H
#define UI_REQUESTINGWIDGET_H

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

class Ui_requestingWidget
{
public:
    QLabel *bookName;
    QLabel *id;
    QLabel *author;
    QLabel *date;
    QFrame *line;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QWidget *requestingWidget)
    {
        if (requestingWidget->objectName().isEmpty())
            requestingWidget->setObjectName(QStringLiteral("requestingWidget"));
        requestingWidget->resize(630, 150);
        bookName = new QLabel(requestingWidget);
        bookName->setObjectName(QStringLiteral("bookName"));
        bookName->setGeometry(QRect(0, 30, 630, 41));
        QFont font;
        bookName->setFont(font);
        bookName->setStyleSheet(QStringLiteral("font-size:20px;"));
        id = new QLabel(requestingWidget);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(0, 0, 581, 31));
        author = new QLabel(requestingWidget);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(0, 70, 471, 31));
        date = new QLabel(requestingWidget);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(0, 100, 471, 31));
        line = new QFrame(requestingWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 140, 630, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        commandLinkButton = new QCommandLinkButton(requestingWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(560, 80, 61, 61));
        commandLinkButton->setStyleSheet(QStringLiteral("background:transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/Oxygen-Icons.org-Oxygen-Actions-edit-delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);
        commandLinkButton->setIconSize(QSize(50, 50));

        retranslateUi(requestingWidget);

        QMetaObject::connectSlotsByName(requestingWidget);
    } // setupUi

    void retranslateUi(QWidget *requestingWidget)
    {
        requestingWidget->setWindowTitle(QApplication::translate("requestingWidget", "requestingWidget", Q_NULLPTR));
        bookName->setText(QString());
        id->setText(QString());
        author->setText(QString());
        date->setText(QString());
        commandLinkButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class requestingWidget: public Ui_requestingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTINGWIDGET_H
