#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	for(int qw=0;qw<t;qw++)
	{
		int n;
		cin>>n;
		vector<int> v;
		map<int,int> m;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			v.push_back(temp);
			m[temp]=m[temp]+1;
		}
		int max=0,min=INT_MAX,gpmax=0,gpmin=INT_MAX;
		if(v[1]-v[0]<=2)
		{
			gpmax+=1;
		}
		else
		{
			min=1;
		}
		for(int i=1;i<n;i++)
		{
			if(((v[i]-v[i-1])<=2))
			{
				gpmax+=1;
			}
			else
			{
				
				if(max<gpmax)
				{
					max=gpmax;
				}
				if(gpmax!=0)
				{
					//min=min>gpmax?gpmax:min;
					if(min>gpmax)
					{
						min=gpmax;
					}
				}
				gpmax=1;

			}
		}
		
		
		if(max<gpmax)
		{
			max=gpmax;
		}
		
		
		if(min>gpmax)
		{
			min=gpmax;
		}
		
		cout<<min<<" "<<max<<endl;

	}
}
