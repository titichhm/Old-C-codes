#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int l,r;
		cin>>l>>r;
		if(l==1) cout<<-1<<endl;
		else
		{
			long long int ans=r;
			
			for(long long int i=l;i<r;i++)
			{
				if(ans%i==0)
				{
					ans++;
					break;
				}
			}
			cout<<ans<<endl;
		}

		
	}
	return 0;
}
