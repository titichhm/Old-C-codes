#include<bits/stdc++.h>
using namespace std;
unordered_map<long long,long long>mp;
stack<long long>s;
long long arr[10000000];
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        
        s.push(arr[0]);//first
        for(int i=1;i<n;i++)//all remaining
        {
            if(arr[i]<s.top())//if top element is greater then the current element
            s.push(arr[i]);//push that element into array
            else
            {
               
                while(!s.empty()&&s.top()<arr[i])
                {
                    mp[s.top()]=arr[i];
                    s.pop();
                    
                }
                
                s.push(arr[i]);
            }
            
        } 
        //for -1 ans elements. that means that it has all the elements which won't get popped
        while(!s.empty())
         {
             mp[s.top()]=-1;
             s.pop();
         }
         //priting bs
         for(int i=0;i<n;i++)
         cout<<mp[arr[i]]<<" ";
         cout<<endl;
         //clearing and bs
         mp.clear();
         while(!s.empty())
         s.pop();
         
         
    }
	return 0;
}
