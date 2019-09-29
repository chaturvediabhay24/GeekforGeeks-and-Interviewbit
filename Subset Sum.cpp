#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool func(ll int a[], ll int n, ll int cost){
	bool subset[n+1][cost+1];
	for(ll int i=0;i<=n;i++){
		subset[i][0]=true;
	}
	for(ll int i=1;i<=cost;i++){
		subset[0][i]=false;
	}
	for(ll int i=1;i<=n;i++){
		for(ll int j=1;j<=cost;j++){
			if(j<a[i-1]){
				subset[i][j]=subset[i-1][j];
			}
			if(j>=a[i-1]){
				subset[i][j]=subset[i-1][j] or subset[i-1][j-a[i-1]];
			}
		}
	}
	return subset[n][cost];
}

int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n;
		cin>>n;
		ll int a[n],s=0,h;
		for(ll int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
		}
		h=s/2;
		if(2*h!=s){
			cout<<"NO"<<endl;
			continue;
		}
		if(func(a,n,h)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	
	
	return 0;
}
