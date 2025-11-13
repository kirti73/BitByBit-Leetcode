struct ListNode* deleteMiddle(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        free(head);
        return NULL;
    }
    struct ListNode *prev=head,*ptr1=head,*ptr2=head;
    while(ptr2!=NULL && ptr2->next!=NULL)
    {
        prev=ptr1;
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }

    prev->next = ptr1 -> next;
    free(ptr1);
    return head;
    
}
