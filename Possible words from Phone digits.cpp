#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> arr;
vector<string> v{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void func(int ind, string str, int n){
    // cout<<ind<<" "<<n<<endl;
    if(ind==n){
        cout<<str<<" ";
        return;
    }
    string s=v[arr[ind]];
    // cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        str+=s[i];
        // cout<<str<<endl;
        func(ind+1,str,n);
        str=str.substr(0,(int )str.size()-1);
    }
    
    
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        func(0,"",n);
        arr.clear();
        cout<<"\n";
    }
    
    
    
    
    return 0;
}
