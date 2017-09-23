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
