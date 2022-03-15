#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<string.h>
#include<ctime>

using namespace std;

class Date
{

    int day;
    int month;
    int year;

public:
    Date();
    ~Date();
    void set_Date(int p_day,int p_month,int p_year);
    void printDate();

};

#endif // DATE_H
