#include<stdio.h>
#include<stdlib.h>
#include "bTreeLib.hpp"

int main(){
	node* tree = NULL;
	tree = insert(tree,02);
	tree = insert(tree,280);
	tree = insert(tree,190);
	tree = insert(tree,213);
	tree = insert(tree,56);
	tree = insert(tree,24);
	tree = insert(tree,18);
	tree = insert(tree,27);
	displayTree(tree);
	return 0;
}
