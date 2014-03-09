#include "linklist.h"
#include <iostream>

using namespace std;

list Linklist::reorder(list head)
{
	list temp1,temp2;
	list evenhead = head;
	if(head == NULL)
		return 0;
	temp1 = head;
	temp2 = head;
	list ehead = head;
	list temp3 = head;
	if(head->data % 2 == 0)
		ehead = head;
			
	while(temp2->next != NULL && temp2->next->data % 2 == 0)
	{
		temp2 = temp2->next;
		evenhead = temp2;
	}

	head = temp2->next;
	temp3 = head;
	temp1 = head;
	
	while(temp3->next != NULL)
	{
		if(temp3->next->data % 2 != 0)
		{
			temp1->next = temp2->next;
			temp1 = temp2->next;
			cout<<"temp1->data = "<<temp1->data<<endl;

			if(temp1->next != NULL && temp1->next->data % 2 != 0)
			{
				temp1 = temp1->next;
				temp3 = temp1;
			}
			else if(temp1->next != NULL)
			{
				temp2->next = temp1->next; 
				temp2 = temp1->next;
				temp3 = temp2;
			}
			
		}

		else
		{
			temp2->next = temp3->next;
			temp2 = temp2->next;
			temp3 = temp2;
		}

		if(temp1->next == NULL)
		{
			break;
		}
	}
	cout<<"ehead->data "<<temp1->data<<endl;
	temp1->next = ehead;
	temp3->next = NULL;
	return head;
}
