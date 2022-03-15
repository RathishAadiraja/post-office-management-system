#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H

#include<iostream>
#include<string.h>
#include<ctime>

#include"date.h"
#include"employee.h"
#include"letter.h"
#include"letterlist.h"
#include"status.h"

using namespace std;


class employee_list
{
    employee* headd;

public:

    employee_list();
    ~employee_list();
    void hire_employee(const char* p_name, double p_employee_id,Date p_joiningDate, const char* p_employee_designation, float p_salary);
    void fire_employee(const char* p_name);
    void printEmployeeList();
    bool check_if_employee_exists(double p_employee_id);
    void sort_letters(const letter_list& my_letter_list);
    void change_employee_salary(double p_employee_id,float new_salary);
    void change_letter_status(const letter_list& my_letter_list,double p_letter_id,status new_status);
    void set_payment_and_stamp(const letter_list& my_letter_list,double p_letter_id,bool p_payment,bool p_stamp);


};
#endif // EMPLOYEELIST_H
