#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int q=7+int(pow(10,9));
	
	cin>>t;
	for(int o=0;o<t;o++)
	{
		int n;
		cin>>n;
		int a[n];
		vector<int> v;
		for(int u=0;u<n;u++)
		{
			cin>>a[u];
			v.push_back(a[u]);
		}
		sort(v.begin(),v.end());
		int profit=0;
		int mod=0;
		for(int u=n-1;u>=0;u--)
		{
			if((v[u]-mod)>0)
			{
				profit=profit+(v[u]-mod);
				mod++;
			}
			else
			{
				break;
			}
		}
		cout<<(profit%q)<<endl;
	}
	return 0;
}
