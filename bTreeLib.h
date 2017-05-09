#ifndef bTreeLib_H
#define bTreeLib_H

struct node{
	int data;
	struct node* right;
	struct node* left;
};
typedef node node;

void displayTree(node*);
int findOnTree(node*,int);
node * insert(node*, int);

node *insert(node *tree, int x){
	if(tree == NULL){
		node* root = (node*)malloc(sizeof(node));
		root->left = NULL;
		root->right = NULL;
		root->data = x;
		return root;		
	}
	
	if(tree->data < x){
		tree->right = insert(tree->right,x);
		return tree;
	}
	
	tree->left = insert(tree->left,x);
	return tree;
}
	
void displayTree(node* tree){
	if(tree == NULL){
		return;
	}
	
	displayTree(tree->left);
	printf("%d ",tree->data);
	displayTree(tree->right);
}

int findOnTree(node * tree,int value){
	if(tree == NULL){
		return -1;
	}
	if(tree->data == value){
		return 1;
	}
	
	if(findOnTree(tree->left,value) == 1){
		return 1;
	}
	
	if(findOnTree(tree->right,value) == 1){
		return 1;
	}
	return -1;
}

#endif
