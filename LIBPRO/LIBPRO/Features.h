#pragma once

#include <iostream>
#include <string>
#include <QString>
#include <QtSql>
#include <qmessagebox.h>
#include <driver.h>
#include <connection.h>
#include <statement.h>
#include <prepared_statement.h>
#include <resultset.h>
#include <exception.h>
#include <QCryptographicHash>

#define DBHOST "tcp://127.0.0.1:3307"
#define USER "root"
#define PASSWORD "anhkhoaq1w2"
#define DBACC "user_admin"
#define DBBOOK "book_admin"
#define CONNECTDB Driver* driver; \
Connection* con; \
Statement* stmt; \
PreparedStatement* pstmt; \
ResultSet* res; \
driver = get_driver_instance(); \
con = driver->connect(DBHOST, USER, PASSWORD); 
#define DISCONNECTDB con->close(); \
delete con;



using namespace std;
using namespace sql;

// Function check Valid, use often
bool checkUser(QString);
bool checkValidString(QString);
bool compareString(QString, QString);

// Fucntion in register
bool checkValidPhone(QString);
bool phoneCorrect(QString, QString);
void changePhone(QString, QString);
void registToDB(QString, QString, QString);

bool resetPassword(QString, QString, QString);
void resetPassword(QString, QString);

bool checkLogin(QString, QString);

QString getInfo(QString);

void writeDB(QString, QString, QString);
QString getUser_now();
QString getPass_now();
QString getPhone_now();
