#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		int n;
		cin>>n;
		vector<int> a;
		for(int o=0;o<n;o++)
		{
			int temp;
			cin>>temp;
			a.push_back(temp);
		}
		int b[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				{
					b[i][j]=0;
					continue;	
				}
				else
				{
					b[i][j]=a[i]+a[j];
				}
			}
		}
		int c=0;
		std::vector<int>::iterator it;
		for(int k=0;k<n;k++)
		{
			for(int l=0;l<n;l++)
			{
				it = std::find (a.begin(), a.end(), b[k][l]); 
    			if (it != a.end()) 
    			{ 
        			c++;
    			}
			}
		}
		
		if(c==0)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<c/2<<endl;
		}
			
	}
	return 0;
}
