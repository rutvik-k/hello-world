/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    Node* x = new Node;
    x->data=data;
    if(head==NULL){
        x->next=NULL;
        x->prev=NULL;
        return x;
    }
    
    if(head->data>data){
        x->prev=NULL;
        x->next=head;
        head->prev=x;
        return x;
    }
    Node* temp = new Node;
    temp=head;
    while(temp->data<data){
        temp=temp->next;
    }
    temp->prev->next=x;
    x->prev=temp->prev;
    x->next=temp;
    temp->prev=x;
    return head;
    
}
