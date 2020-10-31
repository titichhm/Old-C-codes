#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t)
	{
		t--;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(n==1){
			if(a[0]<=-1) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
		/*
		else if(n==2){
			if(a[0]+a[1] == 0) cout<<"YES"<<endl;
			else if(a[0]<=-1){
				while(a[1]!=0)
				{
					int check=0;
					if(a[1]+a[0]==0){
						cout<<"YES";
						check=1;
					}
					a[1]=a[1]-2;
					
				}
			}
		}
		*/
		else
		{
			int sum=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]<0) sum=sum+a[i];
				else{
					if(sum<0) sum+=a[i];
					else sum+=a[i]%(i+1);
				}	
			}
			if(sum==0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;	
		}
	}
	return 0;
}
