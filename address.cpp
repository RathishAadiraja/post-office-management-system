#include<iostream>
#include<string.h>
#include"address.h"

using namespace std;

void address::print_address()
{
    cout << "name:" << name <<"\n" << "street name:" << street_name << "\n" << "street number:" << street_number<<"\n" <<"building name:" << building_name <<"\n"<< "building number:" << building_number <<"\n"<< "pincode:" << pincode << endl;
}
