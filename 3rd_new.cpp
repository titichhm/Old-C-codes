#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t,x,k;
	cin>>t;
	while(t!=0)
	{
		cin>>x>>k;
		//x-positive divisors,k-prime
		//x has k prime factors
		int count=0;
		int div=2;
		while(x!=1)
		{
			while (x % 2 == 0)  
			{  
    			count++;  
    			x = x/2;  
			}  
  
    		for (int i = 3; i <= sqrt(x); i = i + 2)  
    		{  
         
        		while (x % i == 0)  
        			{	  
            			count++; 
            			x = x/i;  
        			}  
    		}  
    		if (x > 2)  
        		count++;
        		
        		
        	if(count==k)
        		cout<<1<<endl;
        	else
        		cout<<0<<endl;
		}
		t--;
	}
	return 0;
}
