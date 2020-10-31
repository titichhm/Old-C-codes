#include<bits/stdc++.h>
using namespace std;

int sumdig(int num)
{
	int sum=0;
	while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}


int main()
{
	long long int t;
	cin>>t;
	
	while(t!=0)
	{
		t--;
		long long int n;
		cin>>n;
		long long int a[n];
		long long int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i]; 
		}
		
		int as=0,bs=0;
		for(int i=0;i<n;i++)
		{
			if(sumdig(a[i])>sumdig(b[i]))	as++;
			else if(sumdig(a[i])<sumdig(b[i]))	bs++;
			else{
				as++;
				bs++;
			}
		}
		
		if(as>bs)	cout<<0<<" "<<as<<endl;
		else if(bs>as)	cout<<1<<" "<<bs<<endl;
		else	cout<<2<<" "<<bs<<endl;
	}
	return 0;
}
