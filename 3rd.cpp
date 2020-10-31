#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,x,k;
	cin>>t;
	while(t!=0)
	{
		cin>>x>>k;
		//x should be product of k numbers >=2
		//this should be >=k
		int count=0;
		int ck=0;
		while(x%2==0)
		{
			x=x/2;
			count++;
		}
		for(int i=3;i<=sqrt(x);i=i+2)
		{
			while(x%i==0)
			{
				x=x/i;
				count++;
			}
		}
		if(x > 1)
		{
			count++;	
		} 
		if(count>=k)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
		t--;
	}
	return 0;
}
