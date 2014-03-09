#include "linklist.h"
#include <iostream>

using namespace std;

list Linklist::getKthFromEnd(list head, int k)
{
	if(head == NULL)
		return 0;

	
	int count = 0;
	list curr = head;

	switch k
	{
		case 1 :
			curr = curr->next;
	
		case 2 :
			curr = curr->next->next;

		case 3 :
			curr = curr->next->next->next;
	while(curr != NULL)
	{
		if(curr->next == NULL)
		{
			curr = curr->next;
			count++;
		}
		
		else
		{
			curr = curr->next->next;
			count = count + 2;
		}
	}

	
}

	
