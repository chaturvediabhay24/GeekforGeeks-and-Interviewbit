
int dfs( TreeNode* root, int sum){
    
    if(root==NULL ) return 0;
    
    sum-=root->val;
    
    if(root->left==NULL and root->right==NULL and sum==0){
        return 1;
    }
    return (dfs(root->left,sum) or dfs(root->right,sum));
}


int Solution::hasPathSum(TreeNode* A, int B) {
     return dfs(A,B);
}

