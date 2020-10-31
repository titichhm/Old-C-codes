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
		string s;
		cin>>s;
		int g1=0;
		int g2=0;
		int sl1=n;
		int sl2=n;
		for(int i=0;i<s.length();i+=2)
		{
			if(s[i]=='1')
			{
				g1++;
				sl1--;
			}
			else
			{
				sl1--;
			}
			if(g1>sl2+g2)
			{
				cout<<i+1;
				goto hell;
			}
			else if(g2>sl1+g1)
			{
				cout<<i+1;
				goto hell;
			}
			if(s[i+1]=='1')
			{
				g2++;
				sl2--;
			}
			else
			{
				sl2--;
			}
			
			//check 
			if(g1>sl2+g2)
			{
				cout<<i+2;
				goto hell;
			}
			else if(g2>sl1+g1)
			{
				cout<<i+2;
				goto hell;
			}
			else
			{
				continue;
			}
			//ends
		}
		cout<<2*n;
		hell:cout<<endl;
	}
	return 0;
}
