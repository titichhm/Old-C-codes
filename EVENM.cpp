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
		int k=1;
		if(n%2!=0)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					cout<<k<<" ";
					k++;
				}
				cout<<endl;
			}
		}
		else if(n%2==0)
		{
			int k=1;
			for(int i=1;i<=n;i++)
			{
				if(i%2!=0)
				{
					for(int j=k;j<=i*n;j++)
					{
						cout<<j<<" ";
						k++;
					}
					cout<<endl;
				}
				
				else
				{
					k=i*n;
					for(int l=1;l<=n;l++)
					{
						cout<<k<<" ";
						k--;
					}
					k=n*i + 1;
					cout<<endl;
				}
				 
			}
		}
	}
	
	return 0;
}
