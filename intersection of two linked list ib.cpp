/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    int ca=0,cb=0;
    ListNode* a=A,*b=B;
    while(a!=NULL){
        ca++;
        a=a->next;
    }
    while(b!=NULL){
        cb++;
        b=b->next;
    }
    a=A;
    b=B;
    if(ca>cb){
        int c=ca-cb;
        while(c--){
            a=a->next;
        }
    }
    if(cb>ca){
        int c=cb-ca;
        while(c--){
            b=b->next;
        }
    }
    while(a!=NULL and b!=NULL){
        if(a==b){
            return a;
        }
        a=a->next;
        b=b->next;
    }
    return NULL;
}

