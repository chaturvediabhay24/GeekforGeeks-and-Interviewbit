#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll int t;
	cin>>t;
	while(t--){
		deque<ll int> dq;
		ll int n;
		cin>>n;
		ll int a[n],b[n];
		for(ll int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(ll int i=0;i<n;i++){
			if(i%2==1){
				dq.push_back(a[i]);
			}else{
				dq.push_front(a[i]);
			}
		}
		deque<ll int>::iterator itr;
		for(itr=dq.begin();itr!=dq.end();itr++){
			cout<<*itr<<" ";
		}cout<<"\n";
	}
	
	
	
	
	return 0;
}
