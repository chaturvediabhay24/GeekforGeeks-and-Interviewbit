#include<bits/stdc++.h>
using namespace std;

string multiplication(string a, string b){
	int len_a=a.size(),len_b=b.size();
	if(len_a==0 or len_b==0) return "0";
	
	vector<int> result(len_a+len_b,0);
	
	int i_a=0;
	int i_b=0;
	
	for(int i=len_a-1;i>=0;i--){
		int carry=0;
		int n_a=a[i]-'0';
		i_b=0;
		for (int j=len_b-1;j>=0;j--){
			int n_b=b[j]-'0';
			int sum=n_a*n_b+result[i_a+i_b]+carry;
			carry=sum/10;
			result[i_a+i_b]=sum%10;
			i_b++;
		}
		if(carry){
			result[i_a+i_b]=carry;
			carry=0;
		}
		i_a++;
	}
	string s="";
	int i=result.size()-1;
	while(i>=0 and result[i]==0)
	i--;
	if(i==-1) return "0";
	
	while(i>=0){
		s+=('0'+result[i--]);
	}
	return s;
}


int main(){
	string a,b;
	cin>>a;
	cin>>b;
	cout<<multiplication( a, b)<<endl;
	
	
	return 0;
}
