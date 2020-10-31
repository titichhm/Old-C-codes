#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
		t--;
		int n;
		scanf("%d",&n);
		int size=4*n-1;
		int a[size][2];
		unordered_map<int,int> mx;
		unordered_map<int,int> my;
		
		for(int q=0;q<size;q++)
		{
			scanf("%d%d",&a[q][0],&a[q][1]);
		}
		
		for(int i=0;i<size;i++)
		{
			mx[a[i][0]]++;
		}
		
		for(int j=0;j<size;j++)
		{
			my[a[j][1]]++;
		}
		unordered_map<int,int>::iterator itr;
		unordered_map<int,int>::iterator itr2;
		
		for(itr=mx.begin();itr!=mx.end();itr++)
		{
			if((itr->second)%2!=0) printf("%d ",itr->first);
		}
		for(itr2=my.begin();itr2!=my.end();itr2++)
		{
			if((itr2->second)%2!=0) printf("%d ",itr2->first);
		}
		printf("\n");
	}
	return 0;
}
