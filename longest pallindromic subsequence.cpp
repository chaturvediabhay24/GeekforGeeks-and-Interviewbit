#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a;
	b=a;
	reverse(b.begin(),b.end());
	
	int len=a.size();
	int dp[len+1][len+1];
	
	for(int i=0;i<=len;i++){
		for( int j=0;j<=len;j++){
			dp[i][j]=0;
		}
	}
	
	for(int i=1;i<=len;i++){
		for( int j=1;j<=len;j++){
			if(a[i-1]==b[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	
	for(int i=0;i<=len;i++){
		for( int j=0;j<=len;j++){
			cout<<dp[i][j]<<" ";
		}cout<<"\n";
	}
	cout<<dp[len][len]<<endl;
	return 0;
}
