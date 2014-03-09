#include "linklist.h" 
#include <iostream> 

using namespace std; 


int Linklist::countTimes(list head, int value) 
{ 
        int count = 0; 
        if(head == NULL) 
        { 
                cout<<"No element in the list, null list\n"; 
                return count; 
        } 

        else 
        { 
                while(head != NULL) 
                { 
                        if(head->data == value) 
                                count++; 

                        head = head->next; 
                } 
                
                return count; 
        } 
} 
