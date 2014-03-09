#include "linklist.h" 
#include <iostream> 

using namespace std; 

void Linklist::deleteList(list* head) 
{ 
	list * current = head;
	while( *current != 0 ) 
	{
    		list nextPtr = (*current)->next;
	    	delete *current;
    		*current = nextPtr;
	}
	//*head = 0;
} 
