#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long long int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		if(n==1)
		{
			cout<<1<<endl;
		}
		else if(isPowerOfTwo(n)==true)
		{
			cout<<-1<<endl;
		}
		else if(n==3)
		{
			cout<<"2 3 1"<<endl;
		}
		else
		{
			vector<long long int> v;
			v.push_back(2);
			v.push_back(3);
			v.push_back(1);
			for(long long int i=4;i<=n;i++)
			{
				    v.push_back(i);
			}
			
			for(int i=2;i<=(int)log2(n);i++){
				int temp=v[pow(2,i)];
				v[pow(2,i)]=v[pow(2,i)-1];
				v[pow(2,i)-1]=temp;
			}
			for(long long int i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
			
	}
	
	return 0;
}
