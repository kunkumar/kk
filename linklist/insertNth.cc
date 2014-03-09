#include "linklist.h" 
#include <iostream> 

using namespace std; 

void Linklist::insertNth(list * head, int index, int value)
{
	int count = 0;
	
	if(*head == NULL)
	{
		*head = newNode(value);
		return;
		
	}

	else if(index == 0)
	{
		list temp = *head;
		*head = newNode(value);
		(*head)->next = temp;
	}
	
	else
	{
	list * current = head;

	while((count < index-1) && (*current != NULL))
	{
		current = &((*current)->next);
		count++;
	}
	
	list node = newNode(value);
	
	if((*current)->next == NULL)
		(*current)->next = node;

	else
	{
		list current_next = (*current)->next;
		(*current)->next = node;
		node->next = current_next;
	}
	}
}
		
