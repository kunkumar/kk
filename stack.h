#ifndef STACK_H
#define STACK_H

#include "tree.h"
//#define MAX = 100;

class stack
{
	private:
		int top;
		tree array[100];	
	public:
		
		stack()
		{
			top=-1;
		}
		
		void push(tree root);

		tree pop();

		void print(int top);
		
		bool isEmpty();

		int getTop();
		
		tree getTop_post();
};

#endif
