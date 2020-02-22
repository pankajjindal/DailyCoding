/*


Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given n = 3, a solution set is:

[
  "((()))",
  "(()())",
  "(())()",
  "()(())",
  "()()()"
]

*/

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int open =0, close =0;
        this->n =n;
        gp( "(", open+1, close);
        return perms;
        
        
    }
    
    void gp( string str, int open, int close )
    {
        if( open ==n && close ==n )
        {
            perms.push_back(str);
            //return perms;
        }
        if( open <= n)
            gp( str + "(", open+1, close);
        if( close <=n && close < open)
            gp( str + ")", open, close+1);
    
        //return perms;
    }
    
    private:
    int n;
    vector<string> perms;
    
};