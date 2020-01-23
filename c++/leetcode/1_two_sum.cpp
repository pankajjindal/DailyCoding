class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> myhash;
        for( int i =0;i< nums.size();i++){
            if(myhash.find(target-nums[i])!=myhash.end())
                return {myhash[target-nums[i]],i};
            myhash[nums[i]] =i;
    }
        return {};
    }
};

