#include "linklist.h"
#include <iostream>

using namespace std;

list Linklist::insertAtBegining(list head, int data)
{
	if(head == NULL)
	{
		head = newNode(data);
	}
	
	else
	{
		list temp = newNode(data);
		temp->next = head;
		head = temp;
	}

	return head;					
}
