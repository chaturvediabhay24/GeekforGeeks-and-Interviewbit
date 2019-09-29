#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n,k;
		cin>>n>>k;
		ll int a[n];
		ll int mini=INT_MAX,maxi;
		for(ll int i=0;i<n;i++){
			cin>>a[i];
			if(abs(k-a[i])<=mini){
				mini=abs(k-a[i]);
				maxi=a[i];
			}
		}
		cout<<maxi<<endl;
	}
	
	
	
	
	return 0;
}
