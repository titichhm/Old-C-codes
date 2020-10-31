#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	vector<int> res;
	for(int i=0;i<t;i++)
	{
		int temp;
		cin>>temp;
		res.push_back(temp);
	}
	cout<<endl;
	sort(res.begin(), res.end());
	//cout<<unique(res.begin(),res.end());
	res.erase(unique(res.begin(), res.end()), res.end());
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<" ";
	}
	return 0;
}
