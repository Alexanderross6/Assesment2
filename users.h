#ifndef USERS_H
#define USERS_H
#include <QString>
#include <QVector>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>



class users
{
public:
    users();

};
struct user
{
    QString fName;
    QString lName;
    QString email;
    QString password;
    int completedTasks = 0;
    int maxTasks = 0;
    int rating = 0;
    int maxRating = 5;
    int completedEvents = 0;
    int maxCompletedEvents = 0;


};
struct admin
{
    QString userName;
    QString password;
};

//extern user CurrentUser;
inline QVector<user> Users;
inline QVector<admin> Admin;
inline user getCurrentUser(){
    user currentUser;
    currentUser.fName = "jayden";
    currentUser.lName = "jellyman";
    currentUser.email = "jaydenjellyman@live.com";
    currentUser.completedTasks = 0;
    currentUser.maxTasks = 5;
    currentUser.rating = 2;
    currentUser.maxRating = 5;
    currentUser.completedEvents =1;
    currentUser.maxCompletedEvents = 2;
    return currentUser;
}


#endif // USERS_H
