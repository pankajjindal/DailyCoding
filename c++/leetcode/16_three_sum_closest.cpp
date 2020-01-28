class Solution {
public:
int threeSumClosest(vector& nums, int target) {

    int sol,left,m;
    int diff=INT_MAX;
    sort(nums.begin(),nums.end());
    
    for(int i=0;i<nums.size();i++)
    {
        
        left=target-nums[i];
        
        int start=i+1,end=nums.size()-1;
        while(start<end)
        {
            int sum=nums[start]+nums[end];
            if(abs(left-sum)<diff)
            {
                diff=abs(left-sum);
                sol=nums[i]+sum;
                if(diff==0)
                    return sol;
            }
            
            else if(sum>left)
                end--;
            else 
                start++;
        }
    }
    
    return sol;
}   
};

