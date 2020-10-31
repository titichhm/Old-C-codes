#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		if(n==1){
			cout<<1<<endl;
		}
		else if(n==2){
			cout<<-1<<endl;
		}
		else if(n==3){
			cout<<2<<" "<<3<<" "<<1<<endl;
		}
		else if(log2(n)==(int)log2(n)){
			cout<<-1<<endl;
		}
		else{
			v.push_back(2);
			v.push_back(3);
			v.push_back(1);
			for(int i=4;i<=n;i++){
				v.push_back(i);
			}
			for(int i=0;i<n;i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
			for(int i=2;i<=(int)log2(n);i++){
				int temp=v[pow(2,i)];
				v[pow(2,i)]=v[pow(2,i)-1];
				v[pow(2,i)-1]=temp;
			}
			for(int i=0;i<n;i++){
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
