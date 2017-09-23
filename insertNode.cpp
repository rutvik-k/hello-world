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
    
    if(head->next==NULL){
        if(head->data>data){
            x->next=head;
            x->prev=NULL;
            head->prev=x;
            return x;
        }
        else{
            head->next=x;
            x->next=NULL;
            x->prev=head;
            return head;
        }
    }
    
    if(data<head->data){
        x->next=head;
        head->prev=x;
        x->prev= NULL;
        return x;
    }
    
    Node* temp= head;
    //temp = head;
    while(temp->next->data<=data){
        temp=temp->next;
    }
    x->next=temp->next;
    x->prev=temp;
    temp->next->prev=x;
    temp->next=x;
    return head;
}
