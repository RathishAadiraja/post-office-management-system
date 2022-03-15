#ifndef STATUS_H
#define STATUS_H

#include<iostream>
#include<string.h>
#include"date.h"

using namespace std;

class status
    {

    	    const char* previous_status;
    	    const char* current_status;
    	    Date expected_delivery_date;

public:
            void set_current_status(const char* p_current_status){current_status = p_current_status;}
            const char* get_current_status(){return current_status;}
            void set_previous_status(const char* p_previous_status){previous_status = p_previous_status;}
            const char* get_previous_status(){return previous_status;}
            void set_expected_delivery_date( Date p_expected_delivery_date){expected_delivery_date = p_expected_delivery_date;}
            Date get_expected_delivery_date(){return expected_delivery_date;}
            void print_status();

	};

#endif // STATUS_H
