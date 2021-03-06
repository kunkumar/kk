#include "linklist.h"
#include <iostream>

using namespace std;

list Linklist::build(list head, int data)
{
	if(head == NULL)
	{
		head = newNode(data);
	}
	
	else
	{
		list temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode(data);		
	}
	return head;					
}
