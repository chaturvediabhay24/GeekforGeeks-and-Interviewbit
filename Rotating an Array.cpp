#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n;
		cin>>n;
		ll int a[n],b[n];
		for(ll int i=0;i<n;i++){
			cin>>a[i];
		}
		ll int d;
		cin>>d;
		for(ll int i=0;i<n;i++){
			b[(i-d+n)%n]=a[i];
		}
		for(ll int i=0;i<n;i++)cout<<b[i]<<" ";
		cout<<"\n";
	}
	
	
	
	return 0;
}
