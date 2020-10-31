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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		map<int,int>m;
		m[5]=0;
		m[10]=0;
		m[15]=0;
		
		
		for(int i=0;i<n;i++)
		{
			if(a[i]==5)
			{
				m[5]++;
			}
			else if(a[i]==10)
			{
				if(m[5]>0)
				{
					m[5]--;
					m[10]++;
				}
				else
				{
					cout<<"NO";
					goto hell;
				}
			}
			else if(a[i]==15)
			{
				if(m[10]>0)
				{
					m[10]--;
					m[15]++;
				}
				else if(m[5]>1)
				{
					m[5]-=2;
					m[15]++;
				}
				else
				{
					cout<<"NO";
					goto hell;
				}
			}
		}
		
		cout<<"YES";
		hell:cout<<endl;
	}
	return 0;
}
