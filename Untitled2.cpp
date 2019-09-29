#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int c;
ll int func(ll int i, ll int n, vector<ll int> v, ll int cost){
	ll int t[cost+1]={0};
	t[0]=1;
	for(ll int i=0;i<n;i++){
		for(ll int j=v[i];j<=cost;j++){
			t[j]+=t[j-v[i]];
		}
	}
	return t[cost];
}

int main(){
	ll int t;
	cin>>t;
	while(t--){
		c=0;
		ll int n;
		cin>>n;
		vector<ll int > v;
		for(ll int i=0;i<n;i++){
			ll int x;
			cin>>x;
			v.push_back(x);
		}
	ll int k;
	cin>>k;
	c=func(0,n,v,k);
	cout<<c<<endl;
		
	}
	
	return 0;
}
