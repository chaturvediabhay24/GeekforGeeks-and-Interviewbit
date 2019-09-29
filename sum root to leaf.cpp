
 int ans=0;
void func(TreeNode* t, int s){
    if(t==NULL ) return;
    s=(s*10+t->val)%1003;
    if(t->left==NULL and t->right==NULL){
        ans=(ans+s)%1003;
        return ;
    }
    func(t->left,s);
    func(t->right,s);
    return ;
}

int Solution::sumNumbers(TreeNode* A) {
    ans=0;
    if(A==NULL) return 0;
    func(A,0);
    return ans%1003;
}
