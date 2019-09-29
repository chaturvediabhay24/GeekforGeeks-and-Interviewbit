int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i=0,j=0,k=0;
    int l=A.size(),m=B.size(),n=C.size(),diff=INT_MAX;
    while(i<l and j<m and k<n){
        int mini=min(min(A[i],B[j]),C[k]);
        int maxi=max(max(A[i],B[j]),C[k]);
        diff=min(diff,abs(maxi-mini));
        if(A[i]<=B[j] and A[i]<=C[k]){
            i++;
        }else if(B[j]<=A[i] and B[j]<=C[k]){
            j++;
        }else{
            k++;
        }
    }
    return diff;
}

