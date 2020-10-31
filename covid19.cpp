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
			//1 2 3 4 7 9
			int min=n,max=1;
			//for max
			vector<int> v;
			for(int i=0;i<n-1;i++)
			{
				if((x[i+1]-x[i])<=2)
				{
					v.push_back(i);
				}
			}
			for(int i=0;i<v.size();i++)
			{
				int temp=1;
				int ind=v[i];
				while((x[ind+1]-x[ind])<=2 && ind!=n-1)
				{
					ind++;
					temp++;
				}
				if(temp>max)
				{
					max=temp;
				}
				if(temp<min)
				{
					min=temp;
				}
			}
			
			
			cout<<min<<" "<<max<<endl;
		}
	}
	return 0;
}
