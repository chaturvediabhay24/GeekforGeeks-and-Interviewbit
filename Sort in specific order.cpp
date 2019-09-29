#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n;
		cin>>n;
		vector<ll int> e,o;
		for(ll int i=0;i<n;i++){
			ll int x;
			cin>>x;
			if(x%2==0){
				e.push_back(x);
			}else{
				o.push_back(x);
			}
		}
		ll int ee=e.size(),oo=o.size();
		sort(e.begin(),e.end());
		sort(o.begin(),o.end());
		for(ll int i=o.size()-1;i>=0;i--){
			cout<<o[i]<<" ";
		}
		for(ll int i=0;i<e.size();i++){
			cout<<e[i]<<" ";
		}cout<<"\n";
		
	}
	
	
	
	return 0;
}
