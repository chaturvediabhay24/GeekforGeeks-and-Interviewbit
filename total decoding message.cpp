#include<bits/stdc++.h>
using namespace std;
#define ll long long
int countDecodingDP(char *digits, int n) 
{ 
	// A table to store results of subproblems 
	int count[n+1]; 
	count[0] = 1; 
	count[1] = 1; 
	//for base condition "01123" should return 0 
	if(digits[0]=='0') 
		return 0; 
	for (int i = 2; i <= n; i++) 
	{ 
		count[i] = 0; 

		// If the last digit is not 0, 
		// then last digit must add to the number of words 
		if (digits[i-1] > '0') 
			count[i] = count[i-1]; 

		// If second last digit is smaller 
		// than 2 and last digit is smaller than 7, 
		// then last two digits form a valid character 
		if (digits[i-2] == '1' || 
			(digits[i-2] == '2' && digits[i-1] < '7') ) 
			count[i] += count[i-2]; 
	} 
	return count[n]; 
} 

int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n;
		cin>>n;
		char s[n+1];
		cin>>s;
		cout<<countDecodingDP(s,n)<<endl;
	}
	
	
	return 0;
}
