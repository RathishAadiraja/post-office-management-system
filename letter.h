#ifndef LETTER_H
#define LETTER_H
#include<iostream>
#include<string.h>


#include"date.h"
#include"address.h"
#include"status.h"
using namespace std;


class letter
{
    double letter_id;
    float letter_weight;
    float letter_volume;
    address from_address;
    address to_address;
    status letter_status;
    bool payment;
    bool stamp;
    letter* next;
public:
    letter(double p_letter_id,float p_letter_weight,float p_letter_volume,address p_from_address,address p_to_address,status p_letter_status);
  letter(double p_letter_id,float p_letter_weight,float p_letter_volume,address p_from_address,address p_to_address,status p_letter_status,letter* p_next);
    ~letter();
    void set_id(double p_letter_id){letter_id = p_letter_id;}
    double get_id(){return letter_id;}
    void set_letter_weight(float p_letter_weight){letter_weight = p_letter_weight;}
    float get_letter_weight(){return letter_weight;}
    void set_letter_volume(float p_letter_volume){letter_volume = p_letter_volume;}
    float get_letter_volume(){return letter_volume;}
    letter* getnextletter(){return next;}
    void setnextletter(letter* p_next){next = p_next;}
    void print_full_details();
    void print_basic_details();

    void setfrom_address(address p_from_address){from_address = p_from_address;}
    address getfrom_address(){return from_address;}
    void setto_address(address p_to_address){to_address = p_to_address;}
    address getto_address(){return to_address;}
    void setletterstatus(status p_letter_status){letter_status = p_letter_status;}
    status getletterstatus(){return letter_status;}

    void setpayment(bool p_payment){payment = p_payment;}
    bool getpayment(){return payment;}
    void set_stamp(bool p_stamp){stamp = p_stamp;}
    bool get_stamp(){return stamp;}
};

#endif // LETTER_H
