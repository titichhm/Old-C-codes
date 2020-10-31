#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i=5;
	vector<int> v(i);
	v[0]=5;
	v[v.size()-1]=5;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
