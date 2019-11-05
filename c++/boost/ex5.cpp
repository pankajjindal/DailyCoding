
// C++ program to implement the 
// above mentioned function 
  
#include <bits/stdc++.h> 
#include <boost/algorithm/cxx11/any_of.hpp> 
using namespace std; 
  
// Drivers code 
int main() 
{ 
  
    // Declares the sequence with 
    int c[] = { 1, 2, 3 }; 
  
    // Run the function 
    bool ans 
        = boost::algorithm::any_of_equal(c, 1); 
  
    // Condition to check 
    if (ans == 1) 
        cout << "at least one elements is 1"; 
    else
        cout << "all elements are not 1"; 
    return 0; 
} 

