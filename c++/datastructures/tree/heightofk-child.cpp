/*
 * Complete the function below.
 */

/*
    For your reference:
    
    struct TreeNode
    {
        vector<TreeNode*> children;										// Address of children nodes. 
        TreeNode()
        {
            children.clear();
        }
    };
*/


int find_height(TreeNode* root) {
    static int length=0;
    static int max_=0;
    int len;
    if( root == NULL )
       return 0;
       
    if(root->children.size() != 0){
        len = root->children.size();
        for(int i=0;i<len;i++)
         length = find_height(root->children[i]); 
         length = length+1;
         if( length > max_) max_ = length;
    }
        return max_;
        

}
