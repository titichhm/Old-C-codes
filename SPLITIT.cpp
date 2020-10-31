#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int flag=0;
		for(int i=0;i<n-1;i++)
		{
			if(s[i]==s[n-1])
			{
				cout<<"YES"<<endl;
				flag=1;
				break;	
			} 	
		}
		if(flag==0)
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
