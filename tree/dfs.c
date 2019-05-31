#include <stdio.h>
#include <stdlib.h>


typedef struct tree {
	int value;
	struct tree * left;
	struct tree * right;
}tree ;

int compute(tree *root)
{
	int left, right;
    if (root==NULL)
       return 0;
     left = compute( root->left);

     right = compute( root->right);

     return left+right+root->value;
	
}

void dfs ( tree * root )
{
	if ( root==NULL)
		printf( "%d \n",root->value);

	if (root->left != NULL)
		dfs(root->left);
	
	if ( root->right !=NULL)
		dfs(root->right);


}

void addTree(tree * root ,int n)
{
	tree * t;
    if ( root == NULL)
    {
    	t = malloc ( sizeof(tree));
		t->value = n;
		t->left = t->right = NULL; 
    }

	if ( n > root->value)
	{
		if( root->right != NULL)
			addTree(root->right, n);
		else {
			//make a node and add it 
			t = malloc ( sizeof(tree));
		    t->value = n;
		    t->left = t->right = NULL; 
		    root->right = t;

		}

	}
    else 
    	if ( n < root->value)
	{
		if( root->left != NULL)
			addTree(root->left, n);
		else {
			//make a node and add it 
			t = malloc ( sizeof(tree));
		    t->value = n;
		    t->left = t->right = NULL; 
		    root->left = t;
		}

	}
}


// A utility function to create a new BST node 
struct tree *newNode(int item) 
{ 
    struct tree *temp =  (struct tree *)malloc(sizeof(struct tree)); 
    temp->value = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
   
// A utility function to do inorder traversal of BST 
void inorder(struct tree *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->value); 
        inorder(root->right); 
    } 
} 
   
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct tree* node, int key) 
{ 
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key); 
  
    /* Otherwise, recur down the tree */
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    /* return the (unchanged) node pointer */
    return node; 
} 

int main()
{
	int nodes,value;
	tree *t1 = malloc ( sizeof(tree));
	t1->value = 0;
    printf(" enter the tree size");
    scanf ( "%d", &nodes);

    while ( nodes >= 0)
    {
    	printf(" enter the tree node value");
    	scanf ( "%d", &value);
    	addTree(t1, value);
    	nodes--;
    }

	//dfs(t1);

	compute(t1);


}

