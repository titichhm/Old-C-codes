#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	
	while(t!=0)
	{
		t--;
		long long int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int sum=0;
		for(int i=0;i<n-1;i++)
		{
			if((abs(a[i+1]-a[i]))==1)	continue;
			else	sum+=-1+abs(a[i+1]-a[i]);
		}
		cout<<sum<<endl;
	}
	return 0;
}
