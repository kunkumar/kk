#include "linklist.h" 
#include <iostream> 

using namespace std; 

int Linklist::findElement(list head, int value)
{
	int index = 0;
	while(head != NULL)
	{
	
		if(head->data == value)
			return index;

		index++;

		head = head->next;
	}
	
	cout<<"Element not found\n";
	return -1;
}
