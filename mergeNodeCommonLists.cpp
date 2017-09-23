int FindMergeNode(Node *headA, Node *headB){
    // Complete this function
    // Do not write the main method. 
    while(headA!=NULL){
        while(headB!=NULL){
            if(headA==headB)
                return headA->data;
            headB=headB->next;
        }
        headA=headA->next;
    }
}




/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/

int n(Node* A){
    int count=0;
    while(A!=NULL){
        count++;
        A=A->next;
    }
    return count;
}
int FindMergeNode(Node *headA, Node *headB){
    // Complete this function
    // Do not write the main method. 
    for(int i=0;i<n(headA);i++){
        for(int j=0;j<n(headB);j++){
            if(headA==headB){
                return headA->data;
                break;
            }
            headB=headB->next;
        }
        headA=headA->next;
    }
}
