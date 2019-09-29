#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n,d;
		cin>>n>>d;
		ll int c[n],p[n];
		for(ll int i=0;i<n;i++)cin>>c[i];
		for(ll int i=0;i<n;i++)cin>>p[i];
		d=(d+1)%2;
		ll int cost=0;
		for(ll int i=0;i<n;i++){
			if(c[i]%2==d){
				cost+=p[i];
			}
		}
		cout<<cost<<endl;
	}
	
	
	
	return 0;
}
