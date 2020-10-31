#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		t--;
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;//n is the length
		int c[q];
		for(int i=0;i<q;i++)
		{
			cin>>c[i];
		}
		//pending queues
		map<char,int> m;
		for(int i=0;i<26;i++)
		{
			m[char(97+i)]=0;
		}
		map<char,int>::iterator itr;
		map<char,int>::iterator itr2;
		for(int i=0;i<s.length();i++)
		{
			m[s[i]]++;
		}
		
		for(int i=0;i<q;i++)
		{
			int temp=c[i];
			int count=0;
			for (itr = m.begin(); itr != m.end(); ++itr)
			{ 
        		if((itr->second)>temp)
        		{
        			count=count+((itr->second)-temp);	
				}
    		}
    		cout<<count<<endl;
		}
		
	}
	return 0;
}
