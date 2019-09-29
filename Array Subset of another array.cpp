#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	//code
	ll int t;
	cin>>t;
	while(t--){
	    ll int m,n;
	    cin>>m>>n;
	    set<ll int> s;
	    ll int b[n];
	    for(ll int i=0;i<m;i++){
	        ll int x;
	        cin>>x;
	        s.insert(x);
	    }
	    for(ll int i=0;i<n;i++)cin>>b[i];
	    ll int c=0;
	    for(ll int i=0;i<n;i++){
	        if(s.find(b[i])==s.end()){
	            c=1;
	            break;
	        }
	    }
	    if(c==1){
	        cout<<"No"<<endl;
	    }else{
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}
