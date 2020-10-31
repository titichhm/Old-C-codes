#include<iostream>
#include<memory>
using namespace std; 

template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

int main() 
{ 
    cout<<"With unique pointers"<<endl; 
    auto p=make_unique<int>(20); 
    cout<<"Address of pointer p is-"<<to_address(p)<<endl;
    auto p2=make_unique<int>(22); 
    cout<<"Address of pointer p2 is-"<<to_address(p2)<<endl; 
  
    cout<<endl;

    int i=20; 
    cout<<"Address of the pointer to 20 is-"<<to_address(&i)<<endl; 

    int j=21;
    cout<<"Address of the pointer to 21 is-"<<to_address(&j)<<endl;
    return 0; 
}
