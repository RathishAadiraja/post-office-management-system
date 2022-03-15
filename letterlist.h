#ifndef LETTERLIST_H
#define LETTERLIST_H

#include<iostream>
#include<string.h>


#include"date.h"
#include"address.h"
#include"letter.h"


using namespace std;

class letter_list
{

public:

    letter* head;

    letter_list();
    ~letter_list();
    void add_letter(double p_letter_id,float p_letter_weight,float p_letter_volume,address p_from_address,address p_to_address,status p_letter_status);
    void delete_letter(double p_letter_id);
    void printlist_with_basic_details();
    void printlist_with_full_details();
    bool check_if_letter_exists(double p_letter_id);
    void change_address(double p_letter_id,address new_to_address);
    letter_list(const letter_list& my_letter_list);
    letter_list& operator=(const letter_list& my_letter_list);
    letter_list& operator+(const letter_list& my_letter_list);
    letter_list& operator-(const letter_list& my_letter_list);
  //  friend ostream& operator<<(ostream& output,const letter_list& my_letter_list);

};



#endif // LETTERLIST_H

