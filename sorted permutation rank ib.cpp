#define mod 1000003
unordered_map<int,int> f;
int fac(int n){
    if(f[n]) return f[n];
    if(n==1)return 1;
    int x= ((n%mod)*(fac(n-1)%mod))%mod;
    f[n]=x;
    return x;
}
int Solution::findRank(string s) {
    int ans=1;
    f[1]=1;
    int n=s.size();
    int mul=fac(n);
    int c=0;
    for(int i=0;i<n;i++){
        mul=f[n-i-1];
        c=0;
        for (int j=i+1;j<n;j++){
            if(s[j]<s[i])c++;
        }
        ans=((ans%mod)+((c%mod)*(mul%mod))%mod)%mod;
        // cout<<c<<" ";
    }
    return ans;
}

