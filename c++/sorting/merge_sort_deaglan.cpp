#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void merge(vector<T>& nums1, int m, vector<T>& nums2, int n) 
{    

    for(int i = m-1, j = n-1, k = m+n-1;j >= 0; k--)        
        nums1[k] = (i >= 0 && nums1[i] > nums2[j]) ? nums1[i--] : nums2[j--];

}

main(){

    std::vector <int> n{1,2,3,4,0,0,0,0};
    std::vector <int> m{5,6,7,8};

    merge( n, 4, m, 4);

    for( int i =0;i< n.size();i++)
        cout << n[i] ; 

}
