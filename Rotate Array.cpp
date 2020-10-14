#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll int t;
	cin>>t;
	while(t--){
		
		
		
		ll int n;
		
		ll int d;
		cin>>n>>d;
		ll int a[n],b[n];
		for(ll int i=0;i<n;i++){
			cin>>a[i];
		}
		for(ll int i=0;i<n;i++){
			b[(i+d)%n]=a[i];
		}
		for(ll int i=0;i<n;i++)cout<<b[i]<<" ";
		cout<<"\n";
	}
	
	
	
	return 0;
}
