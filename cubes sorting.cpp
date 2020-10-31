#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		t--;
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		int count=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int mul=v[i] & v[j];
				int xr=v[i]^v[j];
				if( mul >= xr) count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
