/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* h=NULL,*head=NULL;
    int c=0;
        ListNode* t1=new ListNode(0);
        int x=(A->val+B->val+c);
        c=x/10;
        t1->val=x%10;
        A=A->next;
        B=B->next;
        h=t1;
        head=h;
    while(A!=NULL and B!=NULL){
        ListNode* t=new ListNode(0);
        int x=(A->val+B->val+c);
        c=x/10;
        t->val=x%10;
        h->next=t;
        h=h->next;
        A=A->next;
        B=B->next;
    }
    while(A!=NULL){
        ListNode* t=new ListNode(0);
        int x=(A->val+c);
        c=x/10;
        t->val=x%10;
        h->next=t;
        h=h->next;
        A=A->next;
    }
    while(B!=NULL){
        ListNode* t=new ListNode(0);
        int x=(B->val+c);
        c=x/10;
        t->val=x%10;
        h->next=t;
        h=h->next;
        B=B->next;
    }
    if(c>0){
        ListNode* t=new ListNode(c);
        h->next=t;
    }
    return head;
}

