#include "linklist.h"
#include <iostream>

using namespace std;

list Linklist::reverseRec(list head, list previous)
{
	if(head->next == NULL)
	{
		head->next = previous;
		return head;
	}
	
	else
	{
		list temp = reverseRec(head->next,head);
		head->next = previous;
		return temp;
	}
		
}
