#include<iostream>
#include<string.h>
#include<ctime>

#include"date.h"
#include"employee.h"
#include"employeelist.h"
#include"address.h"
#include"letter.h"
#include"letterlist.h"
#include"status.h"

using namespace std;

employee_list::employee_list()
{
 headd = NULL;
}


employee_list::~employee_list()
{
    employee* current;

    while((current=headd)!=nullptr)
    {
        headd = headd->getnextemployee();
        delete current;

    }

}


void employee_list::hire_employee(const char * p_name,double p_employee_id,Date p_joiningDate, const char* p_employee_designation, float p_salary)
{
    employee* new_node;
    new_node = new employee( p_name,  p_employee_id, p_joiningDate, p_employee_designation, p_salary);

    new_node->setnextemployee(headd);

    headd = new_node;


}

void employee_list::fire_employee(const char* p_name)
{
    employee* temp = headd;
    if(headd==NULL)
        return;
    if(temp->get_Name()==p_name)
    {
        headd = headd->getnextemployee();
        return;
    }
    while(temp->getnextemployee()!= NULL && temp->getnextemployee()->get_Name() != p_name)
  {
    temp = temp->getnextemployee();
  }
  if(temp->getnextemployee()!=NULL)
  {
    temp->setnextemployee(temp->getnextemployee()->getnextemployee());

  }
}

void employee_list::printEmployeeList()
{
   employee* currentt;
   currentt = headd;

   while(currentt!=NULL)
   {
       currentt->print_employee_details();
       currentt = currentt->getnextemployee();
   }
}

void employee_list::change_letter_status(const letter_list& my_letter_list,double p_letter_id,status new_status)
{

    letter* temp;
    temp = my_letter_list.head;

    while(temp!=NULL)
    {
        if(temp->get_id()==p_letter_id)
        {
            temp->setletterstatus(new_status);
        }
        temp = temp->getnextletter();
    }

}

bool employee_list::check_if_employee_exists(double p_employee_id)
{
    employee* current;
    current = headd;

    while(current!=nullptr)
    {
        if(current->get_employee_id()==p_employee_id)
        {
            return true;
        }
        current = current->getnextemployee();
    }
    return false;
}


void employee_list::sort_letters(const letter_list& my_letter_list)
{
    letter* new_node;
    new_node = my_letter_list.head;

    if(new_node!= NULL)
    {
      while(new_node && new_node->getnextletter())
	{
	  if(new_node->getto_address().getpincode()>new_node->getnextletter()->getto_address().getpincode())
	    {
	      int temp = new_node->get_id();
	      new_node->set_id(new_node->getnextletter()->get_id());
	      new_node->getnextletter()->set_id(temp);

	      float temp1 = new_node->get_letter_weight();
	      new_node->set_letter_weight(new_node->getnextletter()->get_letter_weight());
	      new_node->getnextletter()->set_letter_weight(temp1);

	      float temp2 = new_node->get_letter_volume();
	      new_node->set_letter_volume( new_node->getnextletter()->get_letter_volume());
	      new_node->getnextletter()->set_letter_volume( temp2);

	      address temp3 = new_node->getfrom_address();
	      new_node->setfrom_address(new_node->getnextletter()->getfrom_address());
	      new_node->getnextletter()->setfrom_address(temp3);

	      address temp4 = new_node->getto_address();
	      new_node->setto_address(new_node->getnextletter()->getto_address());
	      new_node->getnextletter()->setto_address(temp4);

	      status temp5 = new_node->getletterstatus();
	      new_node->setletterstatus(new_node->getnextletter()->getletterstatus());
	      new_node->getnextletter()->setletterstatus(temp5);
	    }
	  new_node = new_node->getnextletter();
	}
    }

}


void employee_list::change_employee_salary(double p_employee_id,float new_salary)
{
    employee* temp;
    temp = headd;

    while(temp!=NULL)
    {
        if(temp->get_employee_id()==p_employee_id)
        {
            temp->set_salary(new_salary);
        }
        temp = temp->getnextemployee();
    }
}





void employee_list::set_payment_and_stamp(const letter_list& my_letter_list,double p_letter_id,bool p_payment,bool p_stamp)
{
    letter* current;
    current = my_letter_list.head;


    while(current!=nullptr)
    {
        if(current->get_id()==p_letter_id)
        {
            current->setpayment(p_payment);
            current->set_stamp(p_stamp);
        }
        current = current->getnextletter();
    }


}
