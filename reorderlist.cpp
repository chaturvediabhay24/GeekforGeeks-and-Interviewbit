/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

void print(ListNode* x){
    ListNode* f=x;
    while(f!=NULL){
        cout<<f->val<<" ";
        f=f->next;
    }cout<<"\n";
}

ListNode* Solution::reorderList(ListNode* A) {
    ListNode* a,*b,*t;
    a=A;
    b=A;
    t=A;
    int c=0;
    for(int i=0;i<3;i++){
        if(t!=NULL){
            c++;
            t=t->next;
        }
    }
    if(c<3){
        return A;
    }
    
    while(b->next!=NULL and b->next->next!=NULL){
        a=a->next;
        b=b->next->next;
    }
    
    ListNode* l2=a->next, *l1=a->next->next;
    a->next=NULL;
    l2->next=NULL;
    while(l1!=NULL){
        ListNode* t=l1->next;
        l1->next=l2;
        l2=l1;
        l1=t;
    }
    l1=A;
    int i=0;
    // print(l1);
    // print(l2);
    while(l2!=NULL ){
        // cout<<i<<" ";
        ListNode* t1,*t2;
        t1=l1->next;
        t2=l2->next;
        l1->next=l2;
        l2->next=t1;
        l2=t2;
        l1=t1;
    }
    if(l1!=NULL)l1->next=NULL;
    return A;
    
}

