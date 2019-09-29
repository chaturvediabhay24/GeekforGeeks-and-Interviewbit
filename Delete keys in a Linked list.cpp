Node* deleteAllOccurances(Node *head,int x)
{
    //Your code here
    Node *h1,*h2;
    h1=head;
    while(h1->data==x){
        h1=h1->next;
    }
    head=h1;
    h2=head->next;
    while(h2!=NULL){
        if(x==h2->data){
            h1->next=h2->next;
            h2=h1->next;
        }else{
            h1=h1->next;
            h2=h2->next;
        }
    }
    return head;
}
