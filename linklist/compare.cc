#include "linklist.h" 
#include <iostream> 

using namespace std; 

void Linklist::compare(list head_1, list head_2) 
{ 
        int count_1 = Linklist::count(head_1); 
        int count_2 = Linklist::count(head_2); 
        
        if(count_1 == count_2) 
        { 
                while(head_1 != NULL) 
                { 
                        if(head_1->data != head_2->data) 
                        { 
                                cout<<"Lists similar in length but values different\n"; 
                                return ; 
                        } 
                        else 
                        { 
                                head_1 = head_1->next; 
                                head_2 = head_2->next; 
                        } 
                } 
        cout<<"Lists are similar\n"; 
        return ; 
        } 

        else 
        { 
                cout<<"The size of the lists is different :Not similar\n"<<endl; 
                return ; 
        } 
} 
