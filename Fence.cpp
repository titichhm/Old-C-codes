#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,a,b,c;
	cin>>t;
	while(t!=0)
	{
		t--;
		cin >> a >> b >> c;
		long long int e = a + b - 1 ;
		long long int d = e - 1 + c;
		cout<<d<<endl;
	}
	return 0;
}
