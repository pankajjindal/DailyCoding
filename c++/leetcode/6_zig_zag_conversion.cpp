class Solution {
public:
    string convert(string s, int n) 
    {
        vector<string> res(n,"");     
        for (int j = 0, m = (n==1) ? 1 : 2*n-2; j < s.size();  ++j)
            res[n-1-abs(n-1-j % m)] += s[j];
        return accumulate(begin(res), end(res), string());
    }
};

