#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll int t;
	cin>>t;
	while(t--){
	ll int n;
	cin>>n;
	ll int a[n];
	ll int dp[n];
	for(ll int i=0;i<n;i++){
		cin>>a[i];
		dp[i]=1;
	}
	ll int maxi=a[n-1];
	for(ll int i=n-2;i>=0;i--){
		if(a[i]<maxi)dp[i]=0;
		else{
			maxi=a[i];
		}
	}	
	for(ll int i=0;i<n;i++){
		if(dp[i])cout<<a[i]<<" ";
	}cout<<"\n";
	
	
	}
	
	
	return 0;
}
