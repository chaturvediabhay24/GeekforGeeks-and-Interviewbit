
vector<int> Solution::preorderTraversal(TreeNode* A) {
    stack<TreeNode*> st;
    vector<int> v;
    TreeNode* t=A;
    while(t!=NULL or st.size()){
        while(t!=NULL){
            v.push_back(t->val);
            st.push(t);
            t=t->left;
        }
        t=st.top();
        st.pop();
        t=t->right;
    }
    return v;
}
