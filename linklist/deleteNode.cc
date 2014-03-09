#include "linklist.h" 
#include <iostream> 

using namespace std; 

void Linklist::deleteNode(list *head, int value)
{
		
	list * current = head;
	list * previous = head;
	bool flag = false;
	while(*current != NULL)
	{
		if((*current)->data != value)
		{
			*previous = *current;
			*current = (*current)->next;
		}

		else if ((*current)->data == value)
		{
			flag = true;
			(*previous)->next = (*current)->next;
			delete *current;
			*current = (*previous)->next;
			
		}
	}
	if(!flag)
		cout<<"Element not found in the linklist\n";
	cout<<"Count is "<<Linklist::count(*head)<<endl;
}
