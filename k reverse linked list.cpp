ListNode* recursiveReverseLL(ListNode* first, ListNode* r2){
     if(first==r2) return first;

   if(first == NULL) return NULL;

   if(first->next == NULL) return first; 

    ListNode* rest = recursiveReverseLL(first->next,r2); 

   first->next->next = first;

   first->next = NULL; 

   return rest; 
}

void print(ListNode* x){
    while(x!=NULL){
        cout<<x->val<<" ";
        x=x->next;
    }
    cout<<"\n";
}
ListNode* reverseBetween(ListNode* A, int m, int n) {
    ListNode* l1=NULL,*l2,*r1,*r2;
    l2=A;
    if(m==n)return A;
    while(--m){
        l1=l2;
        l2=l2->next;
    }
    r1=A;
    while(--n){
        r1=r1->next;
        if(r1!=NULL)
        r2=r1->next;
        else
        r2=NULL;
    }
    l2=recursiveReverseLL(l2,r1);
    if(l1!=NULL)
    l1->next=l2;
    else{
        A=l2;
    }
    while(l2->next){
        l2=l2->next;
    }
    l2->next=r2;
    // print(l2);
    return A;
}

 
ListNode* Solution::reverseList(ListNode* A, int k) {
    int c=0;
    ListNode* t=A;
    while(t!=NULL){
        t=t->next;
        c++;
    }
    if(c<2) return A;
    int count=c;
    int i=1;
    if(c%k==0){
        c=c/k;
    }else{
        c=c/k+1;
    }
    for(i=1;i<=c;i++){
        if(i*k>count){
            A=reverseBetween(A,(i-1)*k+1,count);
        }else
        A=reverseBetween(A,(i-1)*k+1,i*k);
    }
    return A;
}

