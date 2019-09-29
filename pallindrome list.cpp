/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 void print(ListNode* t){
     ListNode* x=t;
     while(x!=NULL){
         cout<<x->val<<" ";
         x=x->next;
     }cout<<"\n";
 }

ListNode* recursiveReverseLL(ListNode* first){

   if(first == NULL) return NULL; // list does not exist.

   if(first->next == NULL) return first; // list with only one node.

    ListNode* rest = recursiveReverseLL(first->next); // recursive call on rest.

   first->next->next = first; // make first; link to the last node in the reversed rest.

   first->next = NULL; // since first is the new last, make its link NULL.

   return rest; // rest now points to the head of the reversed list.
}

int Solution::lPalin(ListNode* A) {
    if(A==NULL or A->next==NULL){
        return 1;
    }
    ListNode* l1=A,*l2,*h2,*h1;
    l2=new ListNode(A->val);
    h1=A;
    h2=l2;
    l1=l1->next;
    while(l1!=NULL){
        l2->next=new ListNode(l1->val);
        l2=l2->next;
        l1=l1->next;
    }
    // print(h1);
    // print(h2);
    h2=recursiveReverseLL(h2);
    // print(h2);
    while(h1!=NULL and h2!=NULL){
        if(h1->val!=h2->val) return 0;
        h1=h1->next;
        h2=h2->next;
    }
    return 1;
}

