#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string.h>
#include<ctime>

#include"date.h"
#include"letterlist.h"

using namespace std;

class employee
{

	const char * Name;
	double employee_id;
	Date joiningDate;
	const char* employee_designation;
	float salary;

	employee* nextt;

public:
        employee(const char * p_name, double p_employee_id,Date p_joiningDate, const char* p_employee_designation , float p_salary);
		employee(const char * p_name, double p_employee_id,Date p_joiningDate, const char* p_employee_designation , float p_salary,employee* p_nextt);
		void set_Name(const char* p_Name){Name = p_Name;}
		const char* get_Name(){return Name;}
		void set_employee_id(double p_employee_id){employee_id = p_employee_id;}
		double get_employee_id(){return employee_id;}
		void set_salary(float p_salary){salary = p_salary;}
		float get_salary(){return salary;}
        void set_employee_designation(const char* p_employee_designation){employee_designation = p_employee_designation;}
        const char* get_employee_designation(){return employee_designation;}
        employee* getnextemployee(){return nextt;}
		void setnextemployee(employee* p_nextt){nextt = p_nextt;}
		void print_employee_details();

};


#endif // EMPLOYEE_H
