class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        
        sort(a.begin(), a.end()); sort(b.begin(), b.end());
        a.erase(set_intersection(a.begin(), a.end(), b.begin(), b.end(), a.begin()),           a.end());
        vector<int>::iterator ip;
        ip= unique(a.begin(), a.end());
        a.resize(std::distance(a.begin(), ip));
        return a;
        
    }
};
