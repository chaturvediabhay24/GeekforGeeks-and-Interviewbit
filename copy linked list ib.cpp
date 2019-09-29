/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    unordered_map<RandomListNode*, RandomListNode*> copy;
    RandomListNode* t=A;
    while(t!=NULL){
        copy[t]=new RandomListNode(t->label);
        t=t->next;
    }
    t=A;
    while(t!=NULL){
        copy[t]->next=copy[t->next];
        copy[t]->random=copy[t->random];
        t=t->next;
    }
    return copy[A];
}

