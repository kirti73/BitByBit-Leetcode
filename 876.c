struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *ptr1 =head, *ptr2=head;
    while(ptr2!=NULL && ptr2->next!=NULL)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        ptr2=ptr2->next;
    }return ptr1;
    
}
