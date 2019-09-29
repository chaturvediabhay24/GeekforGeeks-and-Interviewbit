ListNode* recursiveReverseLL(ListNode* first){

   if(first == NULL) return NULL; // list does not exist.

   if(first->next == NULL) return first; // list with only one node.

    ListNode* rest = recursiveReverseLL(first->next); // recursive call on rest.

   first->next->next = first; // make first; link to the last node in the reversed rest.

   first->next = NULL; // since first is the new last, make its link NULL.

   return rest; // rest now points to the head of the reversed list.
}
