/*Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int> hmap;
        int st =0;
        int curr_len;
        int max_len=0;
        int start;
        int i;
        
        if ( n == 0 || n==1)
            return n;
         
        hmap[s[0]]=0;
        for (i=1;i<n;i++)
            if(hmap.find(s[i]) == hmap.end())
            {
                hmap[s[i]] = i;
            }
            else
            {
                if(hmap[s[i]] >= st){
                    curr_len = i - st;
                    if(curr_len > max_len)
                    {
                        max_len = curr_len;
                        start = st;
                    }
                    st = hmap[s[i]]+1;
                }
                hmap[s[i]]=i;
            }
        
        if(max_len < i -st)
            max_len = i-st;
            
        return max_len;
    }
};

