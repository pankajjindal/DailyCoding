#include <bits/stdc++.h> 
#include <boost/algorithm/cxx11/one_of.hpp> 
using namespace std; 
// using boost::algorithm; 
  
// Predicate function to check if 
// the element is odd or not 
bool isOdd(int i) 
{ 
    return i % 2 == 1; 
} 
  
// Drivers code 
int main() 
{ 
  
    // Declares the sequence 
    int c[] = { 1, 2, 3 }; 
  
    // Run the function with second syntax 
    bool ans 
        = boost::algorithm::one_of(c, isOdd); 
  
    // Condition to check 
    if (ans == 1) 
        cout << "Exactly one element is odd"; 
    else
        cout << "Exactly one element is not odd"; 
    return 0; 
} 
