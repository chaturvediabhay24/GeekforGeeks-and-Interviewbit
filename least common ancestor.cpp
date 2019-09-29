/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* find(TreeNode* t, int x, vector<int>& v){
    if(t==NULL) return NULL;
    v.push_back(t->val);
    if(t->val==x) return t;
    TreeNode* p,*q;
    p=find(t->left,x,v);
    q=find(t->right,x,v);
    if(p!=NULL ) return p;
    if(q!=NULL ) return q;
    v.pop_back();
    return NULL;
}
int Solution::lca(TreeNode* A, int B, int C) {
 vector<int> bb,cc;
    TreeNode* b=find(A,B,bb);
    TreeNode* c=find(A,C,cc);
    // cout<<b->val<<" "<<c->val<<endl;
    if(b==NULL or c==NULL) return -1;
    int i;
    
    // for(i=0;i<bb.size();i++){
    //     cout<<bb[i]<<" ";
    // }cout<<"\n";
    // for(i=0;i<cc.size();i++){
    //     cout<<cc[i]<<" ";
    // }cout<<"\n";
    
    for( i=0;i<min(bb.size(),cc.size());i++){
        if(bb[i]!=cc[i]){
            return bb[i-1];
        }
    }
    
    
    
    
    if(bb.size()<cc.size()){
        return bb[i-1];
    }else{
        return cc[i-1];
    }
    return 0;
}

