#include <bits/stdc++.h> 
  
// Driver code 
int main() 
{ 
    // Input vector 
    std::vector<int> v{ 10, 20, 45, 40, 50 }; 
  
    // Print vector 
    std::cout << "Vector contains :"; 
    for (unsigned int i = 0; i < v.size(); i++) 
        std::cout << " " << v[i]; 
    std::cout << "\n"; 
  
    std::vector<int>::iterator low1, low2; 
  
    // std :: lower_bound 
    low1 = std::lower_bound(v.begin(), v.end(), 45); 
    low2 = std::lower_bound(v.begin(), v.end(), 55); 
  
    // Printing the lower bounds 
    std::cout 
        << "\nlower_bound for element 35 at position : "
        << (low1 - v.begin()); 
    std::cout 
        << "\nlower_bound for element 55 at position : "
        << (low2 - v.begin()); 
  
    return 0; 
} 
