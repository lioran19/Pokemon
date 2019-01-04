﻿#ifndef MYUSER_H
#define MYUSER_H

#include <QString>
#include <QObject>

class myuser : public QObject
{
    Q_OBJECT
public:
    myuser();
    myuser(const myuser&);
    myuser operator=(const myuser &);
    bool change_money(int);
    void print();


    QString user_id;
    int win_count;//胜场
    int total_count;//总场
    int senior_pkm_medal;//高级精灵奖章:15级精灵个数
    int number_pkm_medal;//精灵个数奖章:精灵个数
    int wincount_medal;//胜场奖章:胜场数
    int primary_medicine;//伤药
    int junior_medicine;//好伤药
    int senior_medicine;//超好伤药
    int status_medicine;//状态恢复药
    int money;//钱

signals:
    void draw_information(QString);
};

#endif // MYUSER_H
