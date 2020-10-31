#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	string seat[6] = { "WS", "MS", "AS", "AS","MS","WS" };
	int front[6]={1,2,3,4,5,6};
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		n=n%12;
		if(n>)
		cout<<seat[n]<<endl;
	}
}
