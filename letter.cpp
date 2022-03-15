#include<iostream>
#include<string.h>

#include"letter.h"
#include"address.h"
#include"status.h"

using namespace std;

letter::letter(double p_letter_id,float p_letter_weight,float p_letter_volume,address p_from_address,address p_to_address,status p_letter_status)
 {
     letter_id = p_letter_id;
     letter_weight = p_letter_weight;
     letter_volume = p_letter_volume;
     from_address = p_from_address;
     to_address = p_to_address;
     letter_status = p_letter_status;
     next = NULL;
     payment = false;
     stamp = false;
 }
 letter::letter(double p_letter_id,float p_letter_weight,float p_letter_volume,address p_from_address,address p_to_address,status p_letter_status,letter* p_next)
 {
     letter_id = p_letter_id;
     letter_weight = p_letter_weight;
     letter_volume = p_letter_volume;
     from_address = p_from_address;
     to_address = p_to_address;
     letter_status = p_letter_status;
     next = p_next;
     payment = false;
     stamp = false;
 }

 letter::~letter()
 {

 }

 void letter::print_basic_details()
{
    cout<< "Letter ID:" << letter_id <<"\t"<< "Letter weight:" << letter_weight<< " grams"<<"\t\t"<< "Letter volume:" << letter_volume << " cu.cm"<< endl;
}

  void letter::print_full_details()
 {


    cout<< "Letter ID:" << letter_id <<"\t"<< "Letter weight:" << letter_weight <<" grams" <<"\t\t"<< "Letter volume:" << letter_volume << " cu.cm"<< endl;
    cout << endl;
    cout << "From address" << endl;
    from_address.print_address();
    cout << endl;
    cout << "To address" << endl;
    to_address.print_address();
    cout << endl;
    cout <<"Letter payment:" << payment << "\t\t" << "letter stamp:" << stamp << endl;
    cout << endl;
    letter_status.print_status();
    cout<< endl << endl << endl;

 }


