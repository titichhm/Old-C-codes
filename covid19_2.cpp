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
		int x[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>x[i];
		}
		
		if(n<=3)
		{
			if(n==1)
			{
				cout<<1<<" "<<1<<endl;
			}
			else if(n==2)
			{
				if(abs(x[1]-x[0])<=2)
				{
					cout<<2<<" "<<2<<endl;
				}
				else
				{
					cout<<1<<" "<<1<<endl;
				}
			}
			else if(n==3)
			{
				
				if(abs(x[1]-x[0])<=2 && abs(x[2]-x[1])<=2)
				{
					cout<<3<<" "<<3<<endl;
				}
				else if(abs(x[1]-x[0])>2 && abs(x[2]-x[1])<=2)
				{
					cout<<1<<" "<<2<<endl;
				}
				else if(abs(x[1]-x[0])<=2 && abs(x[2]-x[1])>2)
				{
					cout<<1<<" "<<2<<endl;
				}
				else if(abs(x[1]-x[0])>2 && abs(x[2]-x[1])>2)
				{
					cout<<1<<" "<<1<<endl;
				}	 
			}
		}
		else
		{
			int min=3,max=1;
			
			cout<<min<<" "<<max<<endl;
		}
	}
	return 0;
}
