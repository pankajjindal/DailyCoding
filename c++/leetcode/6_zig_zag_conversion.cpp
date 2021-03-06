/*****************BEST SOLUTION **************************/
class Solution {
public:
    string convert(string s, int numRows) {
        
        
        ///////
        
        int length = s.length();
        
        if (numRows > length || numRows <= 1) {
            return s;
        }
        
        string  zigZagChars;// = new char[length];
        int count = 0;
        
        int interval = 2 * numRows - 2;
        
        for (int i = 0; i < numRows; i++) {
            int step = interval - 2 * i;
            for (int j = i; j < length; j += interval) {
                zigZagChars[count] = s[j];
                cout << zigZagChars << "\n";
                count++;
                if (step > 0 && step < interval && j + step < length) {
                    zigZagChars[count] = s[j + step];
                    count++;
                }                
            }            
        }
        
        return zigZagChars;
    
        ///////
        
    }
};


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

