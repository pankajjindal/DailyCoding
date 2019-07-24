#include <bits/stdc++.h> 
#include <boost/algorithm/cxx11/none_of.hpp> 
using namespace std; 
  
// Drivers code 
int main() 
{ 
  
    // Declares the sequence 
    int a[] = { 1, 2, 5, 6 }; 
  
    // Run the function 
    bool ans 
        = boost::algorithm::none_of_equal(a, a + 4, 4); 
  
    // Condition to check 
    if (ans == 1) 
        cout << "all not equal to 4"; 
    else
        cout << "all equal to 4"; 
    return 0; 
} 
