#include <stdio.h>


struct tree {
	int value;
	tree * left;
	tree * right;
};



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
	if ( n > root->value)
	{
		if( root->right != NULL)
			addTree(root->right, n);
		else {
			//make a node and add it 
			tree * t = malloc ( sizeof(tree));
		    t->value = n;
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
			tree * t = malloc ( sizeof(tree));
		    t->value = n;
		    root->left = t;
		}

	}
}

int main()
{
	tree t1 = malloc ( sizeof(tree));
	t1->value = 0;
    printf(" enter the tree size")
    scanf ( "%d", nodes)

    while ( node >= 0)
    {
    	printf(" enter the tree node value")
    	scanf ( "%d", value)
    	addTree(t1, value);

    }

	dfs( root->next);

}

