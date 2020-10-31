#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define loop(i,n,a) for(i=a;i<n;i++)
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;int i;
		vector<int> v;map<int,int> m;
		loop(i,n,0){
			int temp;
			cin>>temp;
			v.push_back(temp);
			m[temp]+=1;
		}
		int max=0,min=INT_MAX,gpmax=0,gpmin=INT_MAX;
		if(v[1]-v[0]<=2){
			gpmax+=1;
		}
		else{
			min=1;
		}
		loop(i,n,1){
			if(((v[i]-v[i-1])<=2)){
				gpmax+=1;
			}
			else{
				max=max<gpmax?gpmax:max;
				if(gpmax!=0){
					min=min>gpmax?gpmax:min;
				}
				gpmax=1;

			}
		}
		
		max=max<gpmax?gpmax:max;
		min=min>gpmax?gpmax:min;
		
		cout<<min<<" "<<max<<endl;

	}
}
