#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int c;
void func(ll int i, ll int sum, ll int n, vector<ll int> v, ll int cost){
	if(i>=n){
		return ;
	}
	if(sum==cost){
		c++;
		return;
	}
	if(sum>cost){
		return;
	}
//	func(i,sum+v[i],n,v,cost);
	func(i,sum+v[i],n,v,cost);
	func(i+1,sum,n,v,cost);
	
	return ;
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
	func(0,0,n,v,k);
	cout<<c<<endl;
		
	}
	
	return 0;
}
