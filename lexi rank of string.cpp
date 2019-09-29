#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll int fac(ll int x){
	ll int a=1;
	while(x>1){
		a*=x--;
	}
	return a;
}

void create(ll int* count, string s, ll int len){
	for(ll int i=0;i<len;i++) count[s[i]]++;
	for(ll int i=1;i<256;i++){
		count[i]+=count[i-1];
//		cout<<count[i]<<" ";
	}
}

void update(ll int* count, char ch){
	for (ll int i=ch;i<256;i++)count[i]--;
}

ll int findrank(string s, ll int len){
	// int len=sizeof(s)/sizeof(s[0]);
	ll int mul=fac(len);
	ll int rank=1;
	
	ll int count[256];
	for(ll int i=0;i<256;i++)count[i]=0;
	create(count,s,len);
//	printf("%d")
//	for(ll int i=0;
	
	for(ll int i=0;i<len;i++){
		mul/=len-i;
//		cout<<count[s[i]-1]<<endl;
//		cout<<s[i]<<" ";
		rank+=count[s[i]-1]*mul;
//		update(count,s[i]);                                                         //                           first line
		for (ll int i=s[i];i<256;i++)count[i]--;                                //                               second line
	}
	
	
	
	return rank;
}

int main(){
	// char str[1000];
	string s="string";
//	cin>>s;
	cout<<findrank(s,s.size())<<endl;
	// cout<<fac(5)<<endl;
	
	
	
	return 0;
}
