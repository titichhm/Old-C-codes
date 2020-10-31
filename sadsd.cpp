#include <iostream> 
#include <memory> 
using namespace std; 
  
// Allocate memory and return 
// the pointer to that memory 
template <class A> 
auto allocator_new(A& a) 
{ 
    auto p = a.allocate(1); 
    try { 
        allocator_traits<A>::construct( 
            a, to_address(p)); 
    } 
    catch (...) { 
        a.deallocate(p, 1); 
        throw; 
    } 
  
    cout << "Pointer to Memory allocated: "
         << p << endl; 
    return p; 
} 
  
// Delete memory using 
// pointer to that memory 
template <class A> 
void allocator_delete( 
    A& a, 
    typename allocator_traits<A>::pointer p) 
{ 
    allocator_traits<A>::destroy( 
        a, to_address(p)); 
    a.deallocate(p, 1); 
    cout << "Pointer to Memory deleted: "
         << p << endl; 
} 
  
// Driver code 
int main() 
{ 
    allocator<int> a; 
    auto p = allocator_new(a); 
    allocator_delete(a, p); 
} 
