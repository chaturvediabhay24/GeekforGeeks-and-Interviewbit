
int find(vector<int> &in, int val, int start, int end){
    for(int i=start;i<=end;i++){
        if(in[i]==val){
            return i;
        }
    }
    return -1;
}

TreeNode* func(vector<int> &p, vector<int> &in, int start, int end, int &pp){
    if(start>end) return NULL;
    TreeNode* t=new TreeNode(p[pp]);
    pp++;
    int ind=find(in,t->val,start,end);
    t->left=func(p,in,start,ind-1,pp);
    t->right=func(p,in,ind+1,end,pp);
    return t;
}
 
TreeNode* Solution::buildTree(vector<int> &p, vector<int> &in) {
    int pp=0;
    return func(p,in,0,in.size()-1,pp);
}

