int Solution::maximumGap(const vector<int> &a) {
    int n=a.size();
    int lmin[n], rmax[n];
    int mini=INT_MAX, maxi=INT_MIN;
    lmin[0]=a[0];
    for(int i=1;i<n-1;i++){
        lmin[i]=min(lmin[i-1],a[i]);
    }
    rmax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],a[i]);
    }
    int i=0,j=0,diff=-1;
    while(i<n and j<n){
        if(rmax[j]>=lmin[i]){
            diff=max(diff,j-i);
            j++;
        }else{
            i++;
        }
    }
    return diff;
}

