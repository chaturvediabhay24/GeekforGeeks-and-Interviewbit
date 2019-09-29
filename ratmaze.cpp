vector<string> v;
// int dp[MAX][MAX]={0};

void func(int m[MAX][MAX], int n, int i, int j,string s){
    
    if(i<0 or j<0 or i>=n or j>=n or m[i][j]==0 or m[i][j]==2 )
        return ;
    else if(i==n-1 and j==n-1){
        v.push_back(s);
        return;
    }
    else{
        m[i][j]=2;
        func(m,n,i+1,j,s+"D");
        func(m,n,i-1,j,s+"U");
        func(m,n,i,j+1,s+"R");
        func(m,n,i,j-1,s+"L");
        m[i][j]=1;
    }
    return;
}
vector<string> printPath(int m[MAX][MAX], int n)
{
    //Your code here	
    v.clear();
    func(m,n,0,0,"");
    return v;
}
