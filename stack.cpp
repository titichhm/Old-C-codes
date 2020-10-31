#include<bits/stdc++.h>
using namespace std;
void showstack(stack<int> s)
{
	while(!s.empty())
	{
		cout<<'\t'<<s.top();
		s.pop();
	}
	cout<<'\n';
}
int main()
{
	stack<int> s;
	s.push(10);
	s.push(25);
	s.push(30);
	s.push(16);
	cout<<"the stack is :";
	showstack(s);
	s.pop();
	cout<<s.top()<<endl;
	cout<<"size is"<<s.size()<<endl;
	cout<<"the new stack is:";
	showstack(s);
}
