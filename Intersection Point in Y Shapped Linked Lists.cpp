int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *h1=head1,*h2=head2;
    while(h1->next!=NULL){
        h2=head2;
        while(h2->next!=NULL){
            if(h1->next==h2->next){
                return h1->next->data;
            }
            h2=h2->next;
        }
        h1=h1->next;
    }
    return -1;
}
