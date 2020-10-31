#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t)
	{
		t--;
		long long int n,num,len=0;
		cin>>n;
		cin>>num;
		vector<int> v;
		while(num!=0)
		{
			v.push_back(num%10);
			num=num/10;
			len++;
		}
		reverse(v.begin(), v.end());
		if(len%2==0)//even
		{
			for(int i=0;i<n;i++)
			{
				if(v[i]%2==0)
				{
					cout<<2;
					goto last;
				}
			}
			cout<<1;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(v[i]%2!=0)
				{
					cout<<1;
					goto last;
				}
			}
			cout<<2;
		}
		last:cout<<endl;
	}
	return 0;
}
