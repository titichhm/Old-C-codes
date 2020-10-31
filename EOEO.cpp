#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		t--;
		int ts;
		cin>>ts;
		if(ts%2==0)
		{
			while(ts%2==0)
			{
				ts=ts/2;	
			}
		}
		//now ts is odd
		//we only need values even and smaller than ts now
		cout<<(ts-1)/2<<endl;
	}
	
	return 0;
}
