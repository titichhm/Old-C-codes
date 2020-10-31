#include<bits/stdc++.h>
using namespace std;

int fact(int n,int k)
{
	if(n>1)
	{
		k=k*(n-1);	
		fact((n-1),k);	
	}
	else
	{
		return k;
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<fact(n,n);	
}
