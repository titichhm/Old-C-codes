#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		t--;
		int x,y,k,n;
		cin>>x>>y>>k>>n;//x-total pages,y-pages left,k-money left
		int a[n][2];//pages and cost
		for(int i=0;i<n;i++)
		{
			cin>>a[i][0]>>a[i][1];
		}
		int pn=x-y;//pages needed
		for(int i=0;i<n;i++)
		{
			if(a[i][0]>=pn && a[i][1]<=k)
			{
				cout<<"LuckyChef";
				goto hell;
			}
		}
		cout<<"UnluckyChef";
		hell:	cout<<endl;
	}
	return 0;
}
