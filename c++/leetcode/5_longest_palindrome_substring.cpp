class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size(),maxlen=0,left,right;
        if(n==0) return "";
        vector <vector<bool>> dp(n,vector<bool>(n,false));
        
        for( int i=n-1;i>=0;i--)
            for( int j =i;j<n;j++)
            {
                if(i==j)
                   dp[i][j] = true;
                else if ( j == i+1)
                    dp[i][j] = (s[i]==s[j]);
                else 
                    //dp[i][j] = (s[i]==s[j] && dp[i+1][j-1]);
                    dp[i][j] = (dp[i+1][j-1] && s[i]==s[j]);
                        
                if( dp[i][j] && ((j-i+1) > maxlen)){
                    maxlen = j-i+1;
                    left =i;
                    right = j;
                }
            }
        return s.substr(left,maxlen);
    }
};

