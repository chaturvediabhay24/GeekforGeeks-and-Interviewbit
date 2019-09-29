vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size();
    vector<vector<int> > v(2*n-1);
    // vector<int> a;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[j+i].push_back(A[i][j]);
            // cout<<j+i<<" ";
        }
    }
    return v;
}

