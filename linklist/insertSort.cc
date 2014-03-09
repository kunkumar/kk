#include "linklist.h" 
#include <iostream> 

using namespace std; 

void Linklist::insertSort(list * headRef)
{
	list result = NULL; // build the answer here
	list current = *headRef; // iterate over the original list
	list next;
	while (current!=NULL) {
		next = current->next; // tricky - note the next pointer before we change it
		sortedInsert(&result, current);
		current = next;
		}
		*headRef = result;
}
	
