#include <bits/stdc++.h>

using namespace std;


int main()
{
	int a=1,b=101;
	for(int i=a+1;i<b;i++)
	{
		if(sqrt(i)==(int)(sqrt(i)))
		{
			cout<<i<<" ";
		}	
	}
	return 0;    
}

