#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n;
		cin>>n;
		ll int a[n],k;
		for(ll int i=0;i<n;i++){
			cin>>a[i];
		}
		cin>>k;
		sort(a,a+n);
		ll int mini=INT_MAX;
		for(ll int i=0;i<n-k;i++){
			if(abs(a[i]-a[i+k-1])<mini){
				mini=abs(a[i]-a[i+k]);
			}
		}
		cout<<mini<<endl;
	}
	
	
	return 0;
}
