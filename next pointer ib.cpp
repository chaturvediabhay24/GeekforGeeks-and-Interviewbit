void Solution::connect(TreeLinkNode* A) {
    TreeLinkNode* t1=A,*t2;
    while(t1!=NULL){
        t2=t1;
        while(t2!=NULL){
            
            if(t2->left){
                t2->left->next=t2->right;
            }
            
            if (t2->next and t2->right) t2->right->next = t2->next->left;
            
            t2=t2->next;
        }
        
        
        
        
        t1=t1->left;
    }
}
