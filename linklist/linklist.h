#ifndef LINKLIST_H
#define LINKLIST_H
#include <cstddef>

typedef struct nodetype
{
	int data;
	struct nodetype * next;
}node;

typedef node * list;

class Linklist 
{ 
        private: 
        //static int count; 
        public: 
        list _head; 
        Linklist() 
        { 
                _head = NULL; 
        } 

        list build(list _head, int data); 
        list newNode(int data); 
        void printList(list head); 
        static int count(list head); 
        list insertAtBegining(list head, int data); 
        list reverseIt(list head); 
        list reverseRec(list head, list previous); 
        static void compare(list head_1, list head_2); 
        int countTimes(list head, int value); 
        int getNth(list head, int index); 
        void deleteList(list* head); 
	int findElement(list head, int value);
	void deleteNode(list *head, int value);
	void changeToNull(list * head);
	int pop(list * head);
	void insertNth(list * head, int index, int value);
	void sortedInsert(list * head, list node);
	void insertSort(list * head);
	list reorder(list head);
	int getKthFromEnd(list head, int k);
}; 

#endif  
