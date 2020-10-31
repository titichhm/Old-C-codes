#include<bits/stdc++.h>
using namespace std;

long long int subString(string s,long long int n)  
{ 
	long long int count = 0;
    for (long long int i = 0; i < n; i++)  
        for (long long int len = 1; len <= n - i; len++)
        {
            string temp=s.substr(i, len);
			long long int ln=temp.length();
			if(temp[0]=='1' && temp[ln-1]=='1')
				count++;
		}
	return count; 
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
		t--;
		long long int n;
		string s;
		scanf("%lld",&n);
		scanf("%s",&s);
		int ans=subString(s,n);
		printf("%d\n",ans);
	}
	return 0;
}
