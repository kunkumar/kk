#include "linklist.h"
#include <iostream>
#include <malloc.h>

using namespace std;

list Linklist::newNode(int data)
{
	list newNode = (list)malloc(sizeof(node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
