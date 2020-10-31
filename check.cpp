#include <bits/stdc++.h>
using namespace std;

long long int arraySum(long long int a[], long long int n)  
{ 
    long long int initial_sum  = 0;  
    return accumulate(a, a+n, initial_sum); 
}

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
		
		//a.sort();
		 
  		/*
    	//sort(a,a+n);
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
		
		*/
		long long int z = sizeof(a)/sizeof(a[0]);
		long long int avg=(arraySum(a,z))/z;
		sort(a,a+n);
		long long int f=0;
		for(int y=0;y<n;y++)
		{
			if(a[y]>avg || a[y]<avg)
			{
				long long int mi=y-1;
				long long int ml=y;
				long long int ds=avg-a[mi];
				long long int dl=a[ml]-avg;
				if(ds>dl)
				{
					f=ml;
				}
				else
				{
					f=mi;
				}
				
				break;
			}
			
		}
		max_rev=f*a[f];
		cout<<max_rev<<endl;
	return 0;
} 
