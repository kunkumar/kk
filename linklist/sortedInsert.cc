#include "linklist.h" 
#include <iostream> 

using namespace std; 

void Linklist::sortedInsert(list * head, list node)
{
	if((*head == NULL) || (((*head)->data) >= (node->data)))
	{
		node->next = *head;
		*head = node;
	}
	
	else if((*head)->data < node->data)
	{
		list current = *head;
		list prev = *head;
		while((current != NULL)&&((current)->data < (node->data)))
		{
			prev = current;
			current = current->next;
		}
		
		node->next = current;
		(prev)->next = node;
	}
}
