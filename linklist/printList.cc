#include "linklist.h"
#include <iostream>

using namespace std;

void Linklist::printList(list head)
{
	cout<<"Printing list :"<<endl;
	if(head == NULL)
	{
		cout<<"List Empty\n";
		return;
	}

	else
	{
		while(head != NULL)
		{
			cout<<"Data is "<<head->data<<endl;			
			head = head->next;
		}
	}
}
