//Getting Node value from a tail
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *current = head;
    SinglyLinkedListNode *result = head;
    int index=0;
    while(current!=NULL){
        current=current->next;
        if (index++>positionFromTail){
            result = result->next;
        }

    }
    return (result->data);



}
