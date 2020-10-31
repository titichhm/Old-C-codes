#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0)
	{
		t--;
		int n,temp;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			v.push_back(temp);
		}
		int min=*min_element(v.begin(), v.end());
		int sum=min*v.size();
		for(int i=0;i<n;i++)
		{
			v[i]=v[i]-min;
		}
		if(v[0]>0)
		{
			sum=sum+v[0];
			for(int i=1;i<n;i++)
			{
				if(v[i]<=v[i-1])
				{
					sum=sum+v[i];
				}
				else
				{
					break;
				}
			}
			cout<<sum<<endl;
		}
		else//all elements are equal or when 1st is min
		{
			cout<<sum<<endl;
		}
		
	}
	return 0;
}

