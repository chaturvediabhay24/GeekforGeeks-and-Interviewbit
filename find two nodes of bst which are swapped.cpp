TreeNode* first=NULL,*previ=NULL,*last=NULL,*middle=NULL;
 void func(TreeNode* root){
     if(root==NULL) return ;
     func(root->left);
     
     if(previ and root->val<previ->val){
         if(not first){
             first=previ;
             middle=root;
         }else{
             last=root;
         }
     }
     previ=root;
     func(root->right);
 }
 
vector<int> Solution::recoverTree(TreeNode* A) {
    first=NULL;previ=NULL;last=NULL;middle=NULL;
    func(A);
    vector<int> v;
    if(first!=NULL and last!=NULL){
        v.push_back(first->val);
        v.push_back(last->val);
    }else if(first!=NULL and middle!=NULL){
        v.push_back(first->val);
        v.push_back(middle->val);
    }
    sort(v.begin(),v.end());
   return v;
}
