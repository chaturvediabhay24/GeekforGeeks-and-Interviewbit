#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
	ll int t;
	cin>>t;
	
	vector<ll int> v;
	v.push_back(1);
	v.push_back(1);
	
	for(ll int i=2;i<100000;i++){
		v.push_back((v[i-1]+v[i-2])%mod);
	}
	
	while(t--){
		ll int n;
		cin>>n;
		cout<<v[n]<<endl;
	}
	
	
	return 0;
}
