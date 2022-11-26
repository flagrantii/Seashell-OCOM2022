#include<bits/stdc++.h>
using namespace std;
main(){
	int n,r;
	cin>>n>>r;
	pair<long long,long long> shell[n];
	for(int i=0;i<n;i++){
 		cin>>shell[i].first>>shell[i].second;
	}
	for(int i=0;i<r;i++){
		int x,y,sum=0;
		cin>>x>>y;
		for(int j=0;j<n;j++){
			if(x<=shell[j].first and y>=shell[j].first){
				sum+=shell[j].second;
			}
		}
		cout<<sum<<"\n";
	}	
 }
