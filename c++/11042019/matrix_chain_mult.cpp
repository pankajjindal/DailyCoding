/*Matrix Chain Multiplication*/

/*Given a sequence of matrices, find the most efficient way to multiply these matrices together. The problem is not actually to perform the multiplications, but merely to decide in which order to perform the multiplications.

We have many options to multiply a chain of matrices because matrix multiplication is associative. In other words, no matter how we parenthesize the product, the result will be the same. For example, if we had four matrices A, B, C, and D, we would have:

    (ABC)D = (AB)(CD) = A(BCD) = ....
However, the order in which we parenthesize the product affects the number of simple arithmetic operations needed to compute the product, or the efficiency. For example, suppose A is a 10 × 30 matrix, B is a 30 × 5 matrix, and C is a 5 × 60 matrix. Then,

*/

/* A naive recursive implementation that simply 
follows the above optimal substructure property */
#include<bits/stdc++.h> 
using namespace std; 
  
// Matrix Ai has dimension p[i-1] x p[i]  
// for i = 1..n 
int MatrixChainOrder(int p[], int i, int j) 
{ 
    if(i == j) 
        return 0; 
    int k; 
    int min = INT_MAX; 
    int count; 
  
    // place parenthesis at different places  
    // between first and last matrix, recursively  
    // calculate count of multiplications for  
    // each parenthesis placement and return the  
    // minimum count 
    for (k = i; k < j; k++) 
    { 
        count = MatrixChainOrder(p, i, k) + 
                MatrixChainOrder(p, k + 1, j) + 
                p[i - 1] * p[k] * p[j]; 
  
        if (count < min) 
            min = count; 
    } 
  
    // Return minimum count 
    return min; 
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, 1, n - 1); 
} 
  
// This code is contributed by Shivi_Aggarwal 