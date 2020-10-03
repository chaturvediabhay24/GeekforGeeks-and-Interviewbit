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
		for(ll int i=0;i<n;i++){
			cin>>a[i];
		}
		reverse(a,a+n);
		for(ll int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}cout<<"\n";
	}
	
	// used a simple reverse function
	return 0;
}
