#include "linklist.h" 
#include <iostream> 

using namespace std; 

int Linklist::pop(list * head)
{
	int data;

	if(*head == NULL)
		cout<<"List is empty\n";

	list * current = &((*head)->next);

	if(*current != NULL)
	{
		data = (*head)->data;
		delete *head;
		*head = *current;
		
	}

	else
	{
		data = (*head)->data;
		delete *head;
		
	}

	return data;
}
