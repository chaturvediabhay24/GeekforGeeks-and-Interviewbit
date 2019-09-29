ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* h=A,*prev;
    map<int, int> m;
    while(h->next!=NULL){
        if(h->val==h->next->val){
            m[h->val]=1;
        }
        h=h->next;
    }
    while(A!=NULL and m[A->val]){
        A=A->next;
    }
    
    if(A==NULL or A->next==NULL) return A;
    h=A->next;
    prev=A;
    while(h!=NULL){
        if(m[h->val]){
            prev->next=h->next;
            h=h->next;
        }
        else{
            h=h->next;
            prev=prev->next;
        }
    }
return A;
}

