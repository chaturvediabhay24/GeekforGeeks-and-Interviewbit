#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 505
ll int n;
void floydwarshal(ll int g[N][N]){
	for(ll int k=0;k<=n;k++){
		for(ll int i=0;i<=n;i++){
			for(ll int j=0;j<=n;j++){
				if(g[i][k]+g[k][j]<g[i][j]){
					g[i][j]=g[i][k]+g[k][j];
				}
			}
		}
	}
	for(ll int i=0;i<=n;i++){
		for(ll int j=0;j<=n;j++){
			if(g[i][j]>0){
				cout<<i<<" "<<j<<" "<<g[i][j]<<" ";
			}
		}
	}
	cout<<"\n";
	
//	return 0;
}

int main(){
	ll int t;
	cin>>t;
	while(t--){
		cin>>n;
		ll int graph[N][N];
		
		for(ll int i=0;i<=n;i++){
		for(ll int j=0;j<=n;j++){
			graph[i][j]=INT_MAX;
		}}
		
		for(ll int i=0;i<n;i++){
			for(ll int j=0;j<n;j++){
			ll int x;
			cin>>x;
			graph[i][j]=x;
			}
		}

		floydwarshal(graph);
	}
	
	return 0;
}
