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
	    ll int arr[n];
	    for(ll int i=0;i<n;i++)cin>>arr[i];
	    ll int l[n],r[n];
	    l[0]=arr[0];
	    for(ll int i=1;i<n;i++){
	        l[i]=max(l[i-1],arr[i]);
	    }
	    
	   // for(ll int i=0;i<n;i++){
	   //     cout<<l[i]<<" ";
	   // }cout<<"\n";
	    
	    r[n-1]=arr[n-1];
	    for(ll int i=n-2;i>=0;i--){
	        r[i]=max(r[i+1],arr[i]);
	    }
	    
	   // for(ll int i=0;i<n;i++){
	   //     cout<<r[i]<<" ";
	   // }cout<<"\n";
	    
	    ll int s=0;
	    for(ll int i=0;i<n;i++){
	        s+=min(l[i],r[i])-arr[i];
	    }
	    cout<<s<<endl;
	}
	return 0;
}
