    struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *p = head, *pt = head;
    
   
    for (int i = 0; i < n; i++) {
        pt = pt->next;
        if (pt == NULL) { 
            return head->next;
        } 
    }
    
   
    while (pt->next != NULL) {
        p = p->next;
        pt = pt->next;
    }

    p->next = p->next->next;
    return head;
}
