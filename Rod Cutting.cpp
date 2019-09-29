#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n;
		cin>>n;
		vector<ll int> v;
		v.push_back(0);
		for(ll int i=0;i<n;i++){
			ll int x;
			cin>>x;
			v.push_back(x);
		}
		for(ll int i=1;i<=n;i++){
			ll int maxi=INT_MIN;
			for(ll int j=i-1;j>=0;j--){
				maxi=max(maxi,max(v[i],v[i-j]+v[j]));
			}
			v[i]=maxi;
		}
		cout<<v[n]<<endl;
	}
	
	
	return 0;
}
