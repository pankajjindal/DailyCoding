#include<iostream>

class tree{
	tree * left;
	tree * right;
	int value;
};

int findMax( treeNode * root, int max)
{
	if (root == NULL)
		return max;

	if(root->value > max)
		max = root->value;

	findMax( root->left, max);
	findMax( root->right, max);

	return 
}

int main()
{

tree 

}
