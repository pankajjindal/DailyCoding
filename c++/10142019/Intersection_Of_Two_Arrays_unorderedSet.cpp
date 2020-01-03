class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hash;
        unordered_set<int> result;
        int size1 = nums1.size(), size2 = nums2.size();
        for(int i = 0; i < size1; i ++) {
            hash.insert(nums1[i]);
        }
        for(int i = 0; i < size2; i ++) {
            if(hash.find(nums2[i]) != hash.end() && result.find(nums2[i]) == hash.end()) result.insert(nums2[i]);
        }
        vector<int> r;
        for(int i : result) {
            r.push_back(i);
        }
        return r;
    }
};

