#include<iostream>
#include<string.h>

#include"letter.h"
#include"address.h"
#include"letterlist.h"


using namespace std;

letter_list::letter_list()
{
    head = NULL;
}

letter_list::~letter_list()
{
    letter* current ;
    while((current=head) != nullptr)
    {
        head = head->getnextletter();
        delete current;

    }

}

void letter_list::printlist_with_basic_details()
{
    letter* current;
    current = head;
    while(current!=NULL)
    {
        current->print_basic_details();
        current = current->getnextletter();
    }
}

void letter_list::printlist_with_full_details()
{
    letter* current;
    current = head;
    while(current!=NULL)
    {
        current->print_full_details();
        current = current->getnextletter();
    }
}



void letter_list::add_letter(double p_letter_id,float p_letter_weight,float p_letter_volume,address p_from_address,address p_to_address,status p_letter_status)
{
  letter* new_node;
  new_node = new letter(p_letter_id,p_letter_weight,p_letter_volume, p_from_address,p_to_address,p_letter_status);

  new_node->setnextletter(head);
  //new_node->next = head;
  head = new_node;

  if(new_node!= NULL)
    {
      while(new_node && new_node->getnextletter())
	{
	  if(new_node->get_id()> new_node->getnextletter()->get_id())
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
	    }
	  new_node = new_node->getnextletter();
	}
    }
}

void letter_list::delete_letter(double p_letter_id)
{
    letter* temp = head;
    if(head==NULL)
        return;
    if(temp->get_id()==p_letter_id)
    {
        head = head->getnextletter();
        return;
    }
    while(temp->getnextletter()!= NULL && temp->getnextletter()->get_id() != p_letter_id)
  {
    temp = temp->getnextletter();
  }
  if(temp->getnextletter()!=NULL)
  {
    temp->setnextletter(temp->getnextletter()->getnextletter());
  }
}

/*
void letter_list::check_payment(double p_letter_id)
{
    letter* temp = head;
    while (temp!=NULL)
    {

    if (temp->get_id()==p_letter_id && temp->getpaid()==true)
    {
        cout << "Payment is done" << endl;
    }
    else
        cout << "Payment is not done" << endl;
    temp = temp->getnextletter();
    }
}


ostream& operator<<(ostream& output,const letter_list& my_letter_list)
{
    letter* temp = my_letter_list.head;

    while(temp!=nullptr)
    {
        output << temp->print_full_details();
        cout << endl;
        temp = temp->getnextletter();

    }

    return output;
}
*/





bool letter_list::check_if_letter_exists(double p_letter_id)
{
    letter* current;
    current = head;

    while(current!=nullptr)
    {
        if(current->get_id()==p_letter_id)
        {
            return true;
        }

        current = current->getnextletter();
    }
    return false;
}

void letter_list::change_address(double p_letter_id,address new_to_address)
{
    letter* current;
    current = head;

    while(current!=nullptr)
    {
        if(current->get_id()==p_letter_id)
        {
            current->setto_address(new_to_address);
        }
        current = current->getnextletter();
    }
}


letter_list::letter_list(const letter_list& my_letter_list)
{
    head = NULL;

    if (&my_letter_list != nullptr)
    {
        letter *tempNode = my_letter_list.head;

        while (tempNode != NULL)
         {
             add_letter(tempNode->get_id(),tempNode->get_letter_weight(),tempNode->get_letter_volume(),tempNode->getfrom_address(),tempNode->getto_address(),tempNode->getletterstatus());
            tempNode = tempNode->getnextletter();
        }
    }

}

letter_list&letter_list::operator=(const letter_list& my_letter_list)
{
    letter* one = my_letter_list.head;
    head = new letter(one->get_id(),one->get_letter_weight(),one->get_letter_volume(),one->getfrom_address(),one->getto_address(),one->getletterstatus());
    letter* current = head;
    letter* prev;
    current->set_id(one->get_id());
    current->set_letter_weight(one->get_letter_weight());
    current->set_letter_volume(one->get_letter_volume());
    current->setfrom_address(one->getfrom_address());
    current->setto_address(one->getto_address());
    current->setletterstatus(one->getletterstatus());

    while((one = one->getnextletter()) != 0)
    {
        prev = current;
        current = new letter(one->get_id(),one->get_letter_weight(),one->get_letter_volume(),one->getfrom_address(),one->getto_address(),one->getletterstatus());
        prev->setnextletter(current);
    }

}


letter_list&letter_list::operator+(const letter_list& my_letter_list)
{

    letter* temp = my_letter_list.head;
    while(temp!=nullptr)
    {
        add_letter(temp->get_id(),temp->get_letter_weight(),temp->get_letter_volume(),temp->getfrom_address(),temp->getto_address(),temp->getletterstatus());
        temp = temp->getnextletter();

    }
    return *this;

}

letter_list&letter_list::operator-(const letter_list& my_letter_list)
{
    letter_list result = *this;
    letter *tempNode = my_letter_list.head;
    letter *temp2Node = result.head;
    while(tempNode != NULL){
		while(temp2Node != NULL){
			if(tempNode->get_id()==temp2Node->get_id())
            {
				this->delete_letter(tempNode->get_id());
			}
			temp2Node=temp2Node->getnextletter();
		}
		tempNode = tempNode->getnextletter();
		temp2Node = result.head;
	}

	return *this;


}




