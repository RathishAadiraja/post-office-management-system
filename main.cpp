#include <iostream>
#include"date.h"
#include<string.h>
#include<ctime>

#include"address.h"
#include"letter.h"
#include"letterlist.h"
#include"employee.h"
#include"employeelist.h"
#include"status.h"
using namespace std;

int main()
{
    address one_from;

	one_from.setname("Max");
	one_from.setstreet_name("Ludwika warynskiego");
    one_from.setstreet_number(12);
    one_from.setbuilding_name("Dom Studencki Riviera");
    one_from.setbuilding_number(309);
    one_from.setpincode("00-631");

    address one_to;

    one_to.setname("Sam");
	one_to.setstreet_name("Kopinska");
    one_to.setstreet_number(12);
    one_to.setbuilding_name("Dom studencki babylon");
    one_to.setbuilding_number(604);
    one_to.setpincode("00-633");

    Date d_one;
    d_one.set_Date(15,12,2019);

    status s_one;
    s_one.set_current_status("REGISTERED");
    s_one.set_previous_status("NOT REGISTERED");
    s_one.set_expected_delivery_date(d_one);

    address two_from;

	two_from.setname("Victor");
	two_from.setstreet_name("Tatrzanska");
    two_from.setstreet_number(07);
    two_from.setbuilding_name("Dom studencki Tatrzanska");
    two_from.setbuilding_number(402);
    two_from.setpincode("00-634");

    address two_to;

    two_to.setname("Ryan");
	two_to.setstreet_name("Ludwika Warynskiego");
    two_to.setstreet_number(10);
    two_to.setbuilding_name("Dom studencki Mikrus");
    two_to.setbuilding_number(812);
    two_to.setpincode("00-631");

	Date d_two;
	d_two.set_Date(12,01,2020);

	status s_two;
    s_two.set_current_status("ON THE WAY");
    s_two.set_previous_status("REGISTERED");
    s_two.set_expected_delivery_date(d_two);

	address three_from;

	three_from.setname("John");
	three_from.setstreet_name("Akademicka");
    three_from.setstreet_number(05);
    three_from.setbuilding_name("Dom studencki Akademik");
    three_from.setbuilding_number(57);
    three_from.setpincode("00-631");

    address three_to;

    three_to.setname("Richard");
	three_to.setstreet_name("Ksiecia Januszka");
    three_to.setstreet_number(39);
    three_to.setbuilding_name("Dom studencki Ustronie");
    three_to.setbuilding_number(412);
    three_to.setpincode("00-635");


    Date d_three;
    d_three.set_Date(21,01,2020);

    status s_three;
    s_three.set_current_status("ON THE WAY");
    s_three.set_previous_status("REGISTERED");
    s_three.set_expected_delivery_date(d_three);


	letter_list One;
	One.add_letter(846543,420,5.7,one_from,one_to,s_one);
	One.add_letter(654812,200,5.0,two_from,two_to,s_two);
	One.add_letter(254863,640,4.3,three_from,three_to,s_three);



Date Sam;
Sam.set_Date(01,07,1995);

Date Jake;
Jake.set_Date(24,02,2011);

Date Tom;
Tom.set_Date(03,11,2004);

Date Arthur;
Arthur.set_Date(15,07,1999);


Date Ben;
Ben.set_Date(11,12,2015);


employee_list myemployee_list;

myemployee_list.hire_employee("Sam",785469,Sam,"Postman",3000);
myemployee_list.hire_employee("Jake",652141,Jake,"Postmaster",9000);
myemployee_list.hire_employee("Tom",548524,Tom,"Officer",6000);
myemployee_list.hire_employee("Arthur",975412,Arthur,"Officer",6000);
myemployee_list.hire_employee("Ben",365475,Ben,"Officer",6000);

cout << "printing employee list" << endl << endl;

myemployee_list.printEmployeeList();

cout << endl << endl;

myemployee_list.set_payment_and_stamp(One,254863,true,true);
myemployee_list.set_payment_and_stamp(One,846543,true,true);
myemployee_list.set_payment_and_stamp(One,654812,true,true);

    cout << "Printing the letter list with basic details:" << endl;
	One.printlist_with_basic_details();

	cout << endl << endl;
    cout << "Printing the letter list with full details:" << endl;
	One.printlist_with_full_details();

	cout << endl << endl;





	letter_list three;
    three.add_letter(746543,420,5.7,one_from,one_to,s_one);
	three.add_letter(654812,200,5.0,two_from,two_to,s_two);
	three.add_letter(476543,640,4.3,three_from,three_to,s_three);

    One.delete_letter(654812);
    cout << endl <<  "Printing full details of the letters" << endl << endl;
	One.printlist_with_full_details();

    //cout<< "Printing basic details of letters" << endl<< endl;
   // One.printlist_with_basic_details();

   // cout << endl << endl << endl;

    letter_list Two = three;

    Two.printlist_with_basic_details();

    cout << endl;
   cout << "printing before changing thr address" << endl;
    Two.printlist_with_full_details();

   // cout << endl;
    cout << endl;

   cout << "printing after changing thr address" << endl;
    Two.change_address(654812,three_to);

    Two.printlist_with_full_details();

    // cout << endl;
  //  cout << endl;




myemployee_list.printEmployeeList();

//myemployee_list.~employee_list();

//cout << "destructor called" << endl;

//myemployee_list.printEmployeeList();



myemployee_list.fire_employee("Tom");

cout<< "Printing employee details" << endl;

cout << endl << endl;

myemployee_list.printEmployeeList();


cout << "letter list one" << endl;

One.printlist_with_full_details();

cout << endl << endl;
myemployee_list.change_letter_status(One,846543,s_three);

    cout << endl <<  "Printing full details of the letters" << endl << endl;
	One.printlist_with_full_details();


	//cout << endl << endl;
	//myemployee_list.sort_letters(One);

	//One.printlist_with_basic_details();

//cout << endl << endl;



//cout << endl << endl;

//One.printlist_with_full_details();

//cout << endl << endl;

//myemployee_list.sort_letters(One);

//One.printlist_with_basic_details();

//cout << endl << endl;


}
