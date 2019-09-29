int zeroes(int n, int a){
    int c=0;
    while(n){
        n=n/10;
        c++;
    }
    int ca=0;
    while(a){
        a=a/10;
        ca++;
    }
    if(c==ca) return 0;
    return pow(10,ca);
}
vector<int> Solution::plusOne(vector<int> &A) {
    vector<int > v;
    if(A.size()==1 and A[0]==0){
        v.push_back(1);
        return v;
    }
    int c=1;
    for(int i=A.size()-1;i>=0;i--){
        if(A[i]==0 and c==1){
            A[i]=1;
            c=0;
            continue;
        }
        int x=A[i]+c;
        int z=0;
        if(c!=0){
            z=zeroes(x,A[i]);
        }
        if(z){
        A[i]=x%z;
        c=x/z;
        }else{
            c=0;
            A[i]=x;
        }
        
    }
    int i=0;
    if(c){
        v.push_back(c);
    }else{
        
    while(i<A.size() and A[i]==0)i++;
    }
    for(;i<A.size();i++){
        v.push_back(A[i]);
    }
    if(v.size()==0)v.push_back(1);
    return v;
}

