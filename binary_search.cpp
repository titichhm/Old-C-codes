#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int i,int l,int s)
{
	if(l>=i)
	{
		int m=i + (l-i) / 2;
		
		if(a[m]==s)
		{
			return m;
		}
		if(a[m]>s)//element is on left
		{
			return(a,i,m-1,s);
		}
		return(a,m+1,l,s);
	}
	
	return -1;
}
int main()
{
	int n;
	cout<<"enter size of array";
	cin>>n;
	int a[n];
	cout<<"etner the elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"enter the element you want to search for";
	int s;
	cin>>s;
	int ans=binarySearch(a,0,n-1,s);
	cout<<ans;
	return 0;
}
