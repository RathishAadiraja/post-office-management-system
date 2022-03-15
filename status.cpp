#include<iostream>
#include<string.h>

#include"status.h"
#include"date.h"


using namespace std;

void status::print_status()
{
    cout << "Previous Status:" << previous_status << "\t" << "Current Status:" << current_status << "\t" << "Expected delivery date:" ;
    expected_delivery_date.printDate() ;
}

