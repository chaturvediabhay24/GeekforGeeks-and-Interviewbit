/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* recursiveReverseLL(ListNode* first, ListNode* r2){
     if(first==r2) return first;

   if(first == NULL) return NULL; // list does not exist.

   if(first->next == NULL) return first; // list with only one node.

    ListNode* rest = recursiveReverseLL(first->next,r2); // recursive call on rest.

   first->next->next = first; // make first; link to the last node in the reversed rest.

   first->next = NULL; // since first is the new last, make its link NULL.

   return rest; // rest now points to the head of the reversed list.
}

void print(ListNode* x){
    while(x!=NULL){
        cout<<x->val<<" ";
        x=x->next;
    }
    cout<<"\n";
}
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
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

