#include "linklist.h" 
#include <iostream> 

using namespace std; 

int Linklist::count(list head) 
{ 
        int count =0 ; 
        while(head != NULL) 
        { 
                count++; 
                head = head->next; 
        } 

        return count; 
} 
