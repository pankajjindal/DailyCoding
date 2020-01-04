//You are climbing a stair case. It takes n steps to reach to the top.

//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

//Note: Given n will be a positive integer.


// A C program to count number of ways to reach n't stair when 
// a person can climb 1, 2, ..m stairs at a time 

//Answer : This is commonly equal to fibonacci number because one can only clibm 1,2 staris 
// so the fib is 1,1,2,3,5,8,13,.....
//  here we have to add one each time to the totak strais so if two strairs then fib(3) is the answer

#include<stdio.h> 
  
// A recursive function used by countWays 
int countWaysUtil(int n, int m) 
{ 
    int res[n]; 
    res[0] = 1; res[1] = 1; 
    for (int i=2; i<n; i++) 
    { 
       res[i] = 0; 
       for (int j=1; j<=m && j<=i; j++) 
         res[i] += res[i-j]; 
    } 
    return res[n-1]; 
} 
  
// Returns number of ways to reach s'th stair 
int countWays(int s, int m) 
{ 
    return countWaysUtil(s+1, m); 
} 
  
// Driver program to test above functions 
int main () 
{ 
    int s = 4, m = 3; 
    printf("Nuber of ways = %d", countWays(s, m)); 
    return 0; 
} 
