#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll int n=100;
	ll int arr[n];
	arr[0]=1;
	arr[1]=1;
	arr[2]=2;
	
	for(ll int i=3;i<100;i++){
		arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
	}
	ll int t;
	cin>>t;
	while(t--){
		ll int n;
		cin>>n;
		cout<<arr[n]<<endl;
	}
	
	
	
	return 0;
}
