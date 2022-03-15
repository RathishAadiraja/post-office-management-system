#ifndef ADDRESS_H
#define ADDRESS_H
#include<iostream>
#include<string.h>

using namespace std;


class address
{

	    const char* name;
        const char* street_name;
        int street_number;
        const char* building_name;
        int building_number;
        const char* pincode;

public:

        void setname(const char* p_name){name = p_name;}
        const char* getname(){return name;}
        void setstreet_name(const char* p_street_name){street_name = p_street_name;}
        const char* getstreet_name(){return street_name;}
        void setstreet_number(int p_street_number){street_number = p_street_number;}
        int getstreet_number(){return street_number;}
        void setbuilding_name(const char* p_building_name){building_name = p_building_name;}
        const char* getbuilding_name(){return building_name;}
        void setbuilding_number(int p_building_number){building_number = p_building_number;}
        int getbuilding_number(){return building_number;}
        void setpincode(const char* p_pincode){pincode = p_pincode;}
        const char* getpincode(){return pincode;}
        void print_address();


};

#endif // ADDRESS_H
