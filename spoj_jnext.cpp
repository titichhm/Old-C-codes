#include<bits/stdc++.h>
using namespace std;

void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i];
}

int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		t--;
		int n;
		cin>>n;
		int a[n];
		int check=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n-2;i++)
		{
			if(a[i]<a[i+1])
			{
				check=1;
				break;
			}
		}
		int reversev=0;
		if(check==1)
		{
			for(int j=n-1;j>=1;j--)
			{
				for(int i=j-1;i>=0;i--)
				{
					if(a[j]>a[i]) 
						swap(a[j],a[i]);
						
						goto ans;
				}
			}
		}
	
		
	ans:if(check==0) cout<<-1;
		else printArray(a,n);
		cout<<endl;
	}
	return 0;
}
