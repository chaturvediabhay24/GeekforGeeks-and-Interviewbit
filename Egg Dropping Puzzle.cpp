#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll int func(ll int n, ll int k){
	ll int dp[n+1][k+1];
	
	for (ll int i = 1; i <= n; i++) 
    { 
        dp[i][1] = 1; 
        dp[i][0] = 0; 
    } 
  
    for (ll int j = 1; j <= k; j++) 
        dp[1][j] = j;
	
	for(ll int i=2;i<=n;i++){
		for(ll int j=2;j<=k;j++){
			dp[i][j]=INT_MAX;
			for(ll int l=1;l<=k;l++){
				ll int res=1+max(dp[i-1][l-1],dp[i][j-l]);
				dp[i][j]=min(res,dp[i][j]);
			}
		}
	}
	return dp[n][k];
}

int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n,k;
		cin>>n>>k;
		cout<<func(n,k)<<endl;
	}
	
	
	return 0;
}
