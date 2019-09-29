#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll int func(vector<ll int> v, ll int i, ll int s){
	if(i>=v.size()) return s;
	ll int a=func(v,i+2,s+v[i]);
	ll int b=func(v,i+1,s);
	return max(a,b);
}

int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n;
		cin>>n;
		vector<ll int> v;
		for(ll int i=0;i<n;i++){
			ll int x;
			cin>>x;
			v.push_back(x);
		}
		cout<<func(v,0,0)<<endl;
	}
	
	
	return 0;
}
