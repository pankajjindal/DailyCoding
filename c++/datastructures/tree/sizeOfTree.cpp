#include <iostream>

using namespace std;

// A binary tree Node has data, pointer to left 
// child and a pointer to right child 
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
}; 

typedef struct Node Node;
   
int res =0;

unsigned int getfullCount(struct Node* root ,int res ) 
{ 
    if (root == NULL) 
       return 0; 

    //res++;
   
   // getfullCount(root->left, res ) ;

    //getfullCount(root->right, res); 

    return 1 + getfullCount(root->right, res) +getfullCount(root->left, res ) ; ; 
} 

/* Helper function that allocates a new 
   Node with the given data and NULL left 
   and right pointers. */
struct Node* newNode(int data) 
{ 
    struct Node* node = new Node; 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 

int main()
{
    struct Node *root = newNode(2); 
    root->left    = newNode(7); 
    root->right   = newNode(5); 
    //root->left->right = newNode(8); 
    //root->left->right->left = newNode(1); 
    //root->left->right->right = newNode(11); 
   // root->right->right = newNode(9); 
    //root->right->right->left = newNode(4); 
   
    cout << getfullCount(root,0); 
  
}
