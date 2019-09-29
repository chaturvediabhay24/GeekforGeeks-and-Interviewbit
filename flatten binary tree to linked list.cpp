
 
void func(TreeNode* t){
    if(t==NULL) return ;
    if(t->left!=NULL){
        func(t->left);
        TreeNode*l=t->left,*r=t->right;
        t->right=l;
        while(l->right!=NULL){
            l=l->right;
        }
        l->right=r;
        t->left=NULL;
    }
    
    func(t->right);
}
 
TreeNode* Solution::flatten(TreeNode* A) {
    func(A);
    return A;
}

