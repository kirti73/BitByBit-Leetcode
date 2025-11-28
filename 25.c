struct ListNode* reverseKGroup(struct ListNode* head, int k) {

    if (!head || k <= 1) return head;

    struct ListNode dummy;
    dummy.next = head;
    struct ListNode *groupPrev = &dummy;

    while (1) {
        struct ListNode *kth = groupPrev;
        int i;
        for (i = 0; i < k && kth; i++) {
            kth = kth->next;
        }
        if (!kth) break; 

        struct ListNode *groupNext = kth->next;
        struct ListNode *prev = groupNext;
        struct ListNode *curr = groupPrev->next;
        struct ListNode *temp;

        for (i = 0; i < k; i++) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        temp = groupPrev->next;
        groupPrev->next = prev;
        groupPrev = temp;
    }

    return dummy.next;
}
