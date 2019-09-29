set<vector<int> > v;

void perm(vector<int> x,int l, int r){
    if(l>r) return ;
    if(l==r){
        v.insert(x);
        return;
    }
    for(int i=l;i<=r;i++){
        
        // if(x[i]==x[l]) continue;
        
        int temp=x[i];
        x[i]=x[l];
        x[l]=temp;
        
        perm(x,l+1,r);
        
        temp=x[i];
        x[i]=x[l];
        x[l]=temp;
        
    }
    return ;
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    v.clear();
    perm(A,0,A.size()-1);
    vector<vector<int>> vv;
    for(auto x:v){
        vv.push_back(x);
    }
    return vv;
}

