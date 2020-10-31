#include <bits/stdc++.h>
using namespace std;



int main() 
{
		long long int n;
	 	cin>>n;
	 	long long int a[n];
	 	for(long long int j=0;j<n;j++)
	 	{
	 		cin>>a[j];
		}
		long long int max_rev=0;
		
		
		for(int k=0;k<n;k++)//to pick an element
		{
			long long int temp=0;
			for(int p=0;p<n;p++)//for the whole array
			{
				if(a[k]<=a[p])
				{
					temp++;
				}
			}
			temp=temp*a[k];
			if(max_rev<=temp)
			{
				max_rev=temp;
			}
		}
		cout<<max_rev<<endl;
	return 0;
} 
