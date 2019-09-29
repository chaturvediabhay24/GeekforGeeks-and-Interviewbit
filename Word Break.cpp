#include <bits/stdc++.h>
using namespace std;
#define ll long long
unordered_map<string, int> m;

int func(string s, int x){
    if(x==s.size())return 1;
    string str="";
        for(ll int j=x;j<s.size();j++){
            str+=s[j];
            if(m[str] and func(s,j+1)){
                return 1;
            }
        }
    // cout<<str<<endl;
    return 0;
}

int main() {
	ll int t;
	cin>>t;
	while(t--){
	    ll int n;
	    cin>>n;
	    for(ll int i=0;i<n;i++){
	        string s;
	        cin>>s;
	        m[s]=1;
	    }
	    string s;
	    cin>>s;
	    
	    if(func(s,0))cout<<1<<endl;
	    else cout<<0<<endl;
	    
	m.clear();}
	return 0;
}
