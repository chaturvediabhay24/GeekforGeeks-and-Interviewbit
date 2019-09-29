#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	//code
	ll int t;
	cin>>t;
	while(t--){
	    ll int n;
	    cin>>n;
	    ll int a[n];
	    unordered_map<ll int , ll int> m;
	    for(ll int i=0;i<n;i++){cin>>a[i];m[a[i]*a[i]]=1;}
	   // sort(a,a+n);
	    ll int f=0;
	    for(ll int i=0;i<n;i++){
	        for(ll int j=0;j<n;j++){
	            ll int ans=a[i]*a[i]+a[j]*a[j];
	            if(m[ans]){
	                f=1;
	                break;
	            }
	        }
	        if(f){
	            break;
	        }
	    }
	    if(f)cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}
