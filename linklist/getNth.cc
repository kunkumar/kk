#include "linklist.h" 
#include <iostream> 
#define ERROR 12; 
using namespace std; 

int Linklist::getNth(list head, int index) 
{ 
        if(head == NULL) 
        { 
                cout<<"Empty list with no element\n"; 
                return -1; 
        } 

        else if(index > (Linklist::count(head)-1)) 
        { 
                cout<<"The index is greater than the no of nodes\n"; 
                return ERROR; 
        } 

        else 
        { 
                int count = 0; 
                while((count < index) && (head != NULL))         
                { 
                        head = head->next; 
                        count++; 
                } 

                return head->data; 
        } 
}
