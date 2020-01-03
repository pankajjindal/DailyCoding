class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> nums3;
        int k=0,val;
        bool flag = false;
        for( int i = 0; i< nums1.size();i++)
            for( int j = 0; j< nums2.size();j++)
            {
                flag = false;
                if(nums1[i] == nums2[j])
                {
                    val = nums1[i];
                    
                    for(int l =0 ;l<nums3.size();l++)
                    {
                        //cout << nums3[l] << endl;
                        if( nums3[l] == nums1[i])
                        {
                            flag = true;
                            break;
                        }
                    }
                    if(flag == false){
                        //cout << "before" << nums3.size()<<endl ;
                        nums3.push_back(val);
                        //cout << "after"<< nums3.size() <<endl;
                    }
                } 
            }
        return nums3;
    }
};

