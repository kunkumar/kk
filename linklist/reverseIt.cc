#include "linklist.h"
#include <iostream>

using namespace std;

list Linklist::reverseIt(list head)
{
	list temp = head;
	list prev = NULL;
	
	while(head != NULL)
	{
		temp = head->next;
		head->next = prev;
		prev = head;
		head = temp;		
	}
	
	return prev;
}
