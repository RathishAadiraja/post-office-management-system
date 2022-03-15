#include<iostream>
#include<string.h>
#include<ctime>

#include"date.h"

using namespace std;

Date::Date()
{
    day = 0;
    month = 0;
    year = 0;
}
Date::~Date()
{

}

void Date::set_Date(int p_day,int p_month,int p_year)
{
    if(p_day>0&&p_day<32&&p_month>0&&p_month<13)
    {
        day = p_day;
        month = p_month;
        year = p_year;
    }

}

void Date::printDate()
{
  //  cout << timePtr->tm_mday << "/" << timePtr->tm_mon << "/" << timePtr->tm_year << endl;

    cout << day <<"/" << month << "/" << year << endl;

}
