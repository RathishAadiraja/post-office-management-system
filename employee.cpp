#include<iostream>
#include<string.h>
#include<ctime>

#include"date.h"
#include"employee.h"

using namespace std;

employee::employee(const char * p_name, double p_employee_id,Date p_joiningDate,const char* p_employee_designation , float p_salary)
{
    Name = p_name;
    employee_id = p_employee_id;
    joiningDate = p_joiningDate;
    employee_designation = p_employee_designation;
    salary = p_salary;

}

employee::employee(const char * p_name, double p_employee_id,Date p_joiningDate, const char* p_employee_designation, float p_salary,employee* p_nextt)
{
    Name = p_name;
    employee_id = p_employee_id;
    joiningDate = p_joiningDate;
    employee_designation = p_employee_designation;
    salary = p_salary;
    nextt = p_nextt;
}


void employee::print_employee_details()
{
    cout << "Employee name:" << Name <<endl << "Employee id:" << employee_id << endl << "Employee designation: " << employee_designation << endl << "Employee salary:" << salary << endl ;
    cout << "Joining Date:" ;
    joiningDate.printDate();
    cout << endl;
}
