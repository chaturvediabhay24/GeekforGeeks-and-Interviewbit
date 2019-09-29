bool Solution::hotel(vector<int> &a, vector<int> &b, int k) {
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int n=a.size();
    for(int i=0;i<n-k+1;i++){
        if(i+k<n and a[i+k]<b[i]){
            return 0;
        }
    }
    return 1;
}

