int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int n=A.size();
    int sumi=B,mini=INT_MAX;
    for (int i=0;i<n-2;i++){
        int l=i+1,r=n-1;
        int s;
    while(l<r){
        s=A[i]+A[l]+A[r];
        if(abs(s-B)<mini){
            mini=min(mini,abs(s-B));
            sumi=s;
        }
    
        if(s<B){
            l++;
        }else{
            r--;
        }
    }
        
    }
    return sumi;
}

