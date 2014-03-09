#include <iostream> 
#include "linklist.h" 

using namespace std; 

int main() 
{ 
        Linklist obj; 
        obj.printList(obj._head); 
        obj._head = obj.build(obj._head,1); 
        obj._head = obj.build(obj._head,2); 
        obj._head = obj.build(obj._head,3); 
        obj.printList(obj._head); 
        int count = obj.count(obj._head); 
        cout<<"The number of nodes in the list is "<<count<<endl; 

        Linklist obj1; 
        
        obj1._head = obj1.insertAtBegining(obj1._head,21); 
	obj1._head = obj1.insertAtBegining(obj1._head,22); 
        obj1._head = obj1.insertAtBegining(obj1._head,23); 
        obj1._head = obj1.insertAtBegining(obj1._head,24); 
        obj1._head = obj1.insertAtBegining(obj1._head,25); 
        obj1._head = obj1.insertAtBegining(obj1._head,26); 
        obj1._head = obj1.insertAtBegining(obj1._head,27); 
	obj1._head = obj1.insertAtBegining(obj1._head,28); 
        obj1.printList(obj1._head); 

	count = obj1.getKthFromEnd(obj1._head,1);

	cout<<"The number of nodes is "<<count<<endl;

        //obj1._head = obj1.reverseIt(obj1._head); 
        obj1.printList(obj1._head); 

        cout<<"To compare\n"; 
        
        Linklist::compare(obj._head,obj1._head); 
        obj1._head = obj1.reverseIt(obj1._head); 
        Linklist::compare(obj._head,obj1._head); 

        int noOfTimes = obj1.countTimes(obj1._head, 2); 
        
        cout<<"The no of times value occurs is "<<noOfTimes<<endl; 

        cout<<"The value at index n is "<<obj1.getNth(obj1._head,11)<<endl; 

	obj1.printList(obj1._head);

        obj1.deleteList(&(obj1._head)); 

        obj1.printList(obj1._head); 
	int index = obj1.findElement(obj1._head,32);
	if(index != -1)
	cout<<"Found at index "<<index<<endl;
	
	obj1.deleteNode(&(obj1._head),2);

	obj1.printList(obj1._head);

	//obj.changeToNull(&(obj._head));
	//obj.printList(obj._head);
	cout<<"The data popped is "<<obj.pop(&(obj._head))<<endl;
	obj.printList(obj._head);

	Linklist obj2; 
        obj2.printList(obj2._head);
	for(int i =0 ; i < 10; i++) 
        	obj2._head = obj2.build(obj2._head,i+1); 
	obj2.insertNth(&(obj2._head),0,13);
        obj2.printList(obj2._head); 

	cout<<"\n\n\n\n\n\n\n\n\n";
	Linklist obj3;
	obj3.sortedInsert(&(obj3._head),obj3.newNode(12));
	obj3.sortedInsert(&(obj3._head),obj3.newNode(13));
	obj3.sortedInsert(&(obj3._head),obj3.newNode(11));
	obj3.sortedInsert(&(obj3._head),obj3.newNode(14));
	obj3.sortedInsert(&(obj3._head),obj3.newNode(10));
	obj3.sortedInsert(&(obj3._head),obj3.newNode(23));
	obj3.sortedInsert(&(obj3._head),obj3.newNode(24));

	obj3._head = obj3.insertAtBegining((obj3._head),121);
	obj3._head = obj3.insertAtBegining((obj3._head),13);
	obj3._head = obj3.insertAtBegining((obj3._head),11);
	obj3._head = obj3.insertAtBegining((obj3._head),14);
	obj3._head = obj3.insertAtBegining((obj3._head),10);
	obj3._head = obj3.insertAtBegining((obj3._head),23);
	obj3._head = obj3.insertAtBegining((obj3._head),24);
	
	obj3.printList(obj3._head); 

	obj3.insertSort(&(obj3._head));
	obj3.printList(obj3._head); 

	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	Linklist obj4; 
	//obj4._head = obj4.insertAtBegining((obj4._head),16);
	obj4._head = obj4.insertAtBegining((obj4._head),11);
	obj4._head = obj4.insertAtBegining((obj4._head),10);
	obj4._head = obj4.insertAtBegining((obj4._head),8);
	obj4._head = obj4.insertAtBegining((obj4._head),7);
	obj4._head = obj4.insertAtBegining((obj4._head),3);
	obj4._head = obj4.insertAtBegining((obj4._head),2);
	obj4._head = obj4.insertAtBegining((obj4._head),1);
	obj4._head = obj4.insertAtBegining((obj4._head),4);
	obj4._head = obj4.insertAtBegining((obj4._head),5);
	obj4._head = obj4.insertAtBegining((obj4._head),4);	
	obj4._head = obj4.insertAtBegining((obj4._head),12);
	obj4.printList(obj4._head); 

	obj4._head = obj4.reorder(obj4._head);

	cout<<"After reorder\n";
	obj4.printList(obj4._head); 
        return 0; 
} 
