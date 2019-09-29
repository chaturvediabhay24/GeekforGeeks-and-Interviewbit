/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(A==NULL) return A;
    ListNode *a,*b;
    a=A;
    b=a->next;
    // A=b;
    while(b!=NULL){
        int temp=b->val;
        b->val=a->val;
        a->val=temp;
        a=b->next;
        if(a!=NULL) b=a->next;
        else break;
    }
    return A;
}

