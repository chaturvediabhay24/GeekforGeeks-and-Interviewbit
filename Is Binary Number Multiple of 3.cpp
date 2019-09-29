#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll int func(ll int n){
	ll int o=0,e=0;
	if (n < 0) 
        n = -n; 
    if (n == 0) 
        return 1; 
    if (n == 1) 
        return 0; 
	while(n){
		if(n&2){
			e++;
		}else{
			o++;
		}
		n=n>>2;
	}
	return func(abs(e-o));
}

int main(){
	ll int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		reverse(s.begin(),s.end());
		ll int ans=0,mul=1;
		for(ll int i=0;i<s.size();i++){
			if(s[i]-'0'){
				ans+=mul;
			}
			mul*=2;
			
		}
//		cout<<ans<<endl;
		cout<<func(ans)<<endl;
	}
	
	
	
	
	
	return 0;
}
