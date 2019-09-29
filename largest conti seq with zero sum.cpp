vector<int> Solution::lszero(vector<int> &A) {
    map<int, int> m,c;
    int s=0,x=0,y=-1,maxi=INT_MIN;
    c[0]=1;m[0]=0;
    for(int i=0;i<A.size();i++){
        s+=A[i];
        if(c[s] and i-m[s]>maxi){
            maxi=i-m[s];
            x=m[s];
            y=i;
        }else if(not c[s] and i-m[s]==maxi){
            continue;
        }
            else if(not c[s]){
            c[s]++;
            m[s]=i+1;
        }
    }
    // cout<<x<<" "<<y<<endl;
    vector<int> ans;
    for(int i=x;i<=y;i++){
        ans.push_back(A[i]);
    }
    return ans;
}

