#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		t--;
		long long int n,k;
		cin>>n>>k;
		long long int loss=0;
		long long int a[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>k)
			{
				loss=loss+(a[i]-k);
			}
		}
		cout<<loss<<endl;
	}
	return 0;
}
