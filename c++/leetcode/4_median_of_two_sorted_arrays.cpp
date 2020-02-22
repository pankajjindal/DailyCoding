class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double Forward,Backward; 
        int point1=0,point2=0;
        int count=0;
        bool isOdd=true;
        int m=nums1.size()+nums2.size();
        if(m%2==0) isOdd=false;
        m=m/2+1;
        bool Finish1=false,Finish2=false;
        if(point1==nums1.size()) Finish1=true;
        if(point2==nums2.size()) Finish2=true;
        while(count<m)
        {
            if(Finish1)
            {
                ++count;
                Backward=Forward;
                Forward=nums2[point2++];
            }
            else if(Finish2)
            {
                ++count;
                Backward=Forward;
                Forward=nums1[point1++];
            }
            else if(nums1[point1]<nums2[point2])
            {
                ++count;
                Backward=Forward;
                Forward=nums1[point1++];
                if(point1==nums1.size()) Finish1=true;
            }
            else
            {
                ++count;
                Backward=Forward;
                Forward=nums2[point2++];
                if(point2==nums2.size()) Finish2=true;
            }
                
        }
    
        if (isOdd) return(Forward);
        else
        return((Forward+Backward)/2);
    }
};
static int a = [](){ios::sync_with_stdio(NULL);return 0;}();
