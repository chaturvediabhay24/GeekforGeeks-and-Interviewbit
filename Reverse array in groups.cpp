#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll int t;
	cin>>t;
	while(t--){
	ll int n,k;
	cin>>n>>k;
	ll int a[n];
	for(ll int i=0;i<n;i++)cin>>a[i];
	ll int nfitr=n/k;
	for(ll int i=0;i<nfitr;i++){
		for(ll int j=(i+1)*k-1;j>=i*k;j--){
			cout<<a[j]<<" ";
		}
	}
	if(n%k!=0){
		for(ll int i=n-1;(i+1)%k!=0;i--){
			cout<<a[i]<<" ";
//		cout<<"a"<<endl;
		}
	}
	cout<<"\n";
	}
	
	
	
	return 0;
}
