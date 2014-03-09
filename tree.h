#ifndef TREE_H
#define TREE_H

typedef struct nodetype
{
	int data;
	struct nodetype * left;
	struct nodetype * right;
}node;

typedef node * tree;

class Tree
{
	private:
		
	public:
		tree _root;
		Tree()
		{
			_root = NULL;
		}

		tree newNode(int data);
		int size(tree root);
		int maxDepth(tree root);
		void insert(tree * root, int value);
		void printInOrder(tree root);
		void printrec(tree node, int path[], int pathlength);
		void printarray(int path[], int length);
		void printPaths(tree node);
		void mirror(tree root);
		void doubleTree(tree root);
		static bool sameTree(tree root, tree root1);
		int minValue(tree root);
		int maxValue(tree root);
		void inOrderIt(tree root);
		void preOrderIt(tree root);
		void postOrderIt(tree root);
};

#endif
		
