int Solution::maxProduct(const vector<int> &A) {
    int curr_max=1,over_max1=INT_MIN, over_max2=INT_MIN;
    for(int i=0;i<A.size();i++){
        curr_max*=A[i];
        if(curr_max==0){
            curr_max=1;
            continue;
        }
        over_max1=max(over_max1,curr_max);
    }
    curr_max=1;
    for(int i=A.size()-1;i>=0;i--){
        curr_max*=A[i];
        if(curr_max==0){
            curr_max=1;
            continue;
        }
        over_max2=max(over_max2,curr_max);
    }
    int r= max(over_max2,over_max1);
    return max(r,0);
}

