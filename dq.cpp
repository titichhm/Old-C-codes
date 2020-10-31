#include<bits/stdc++.h>
using namespace std;

void print(deque<int> d)
{
	deque<int>::iterator it;
	for(it=d.begin();it!=d.end();it++)
	{
		cout<<" "<<*it;
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	deque <int> dq;
	
	dq.push_front(10);
	dq.push_back(20);
	dq.push_front(30);
	dq.push_back(40);
	print(dq);
	return 0;
}
