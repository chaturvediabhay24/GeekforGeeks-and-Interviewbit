
vector<vector<int> > ans;
void dfs(vector<int> t, TreeNode* root, int sum){
    
    if(root==NULL ) return ;
    
    t.push_back(root->val);
    
    dfs(t,root->left,sum-root->val);
    dfs(t,root->right,sum-root->val);
    
    if(root->left==NULL and root->right==NULL and sum==root->val){
        ans.push_back(t);
        return;
    }
    return ;
}

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    ans.clear();
    // if(A=NULL) return ans;
    vector<int> k;
    dfs(k,A,B);
    return ans;
}
