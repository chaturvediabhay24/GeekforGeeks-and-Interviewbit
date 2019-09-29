
vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode*> st;
    vector<int> v;
    TreeNode* t=A;
    while(t!=NULL or st.size()){
        while(t!=NULL){
            st.push(t);
            t=t->left;
        }
        t=st.top();
        v.push_back(t->val);
        st.pop();
        t=t->right;
    }
    return v;
}
