//iterative
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev=NULL, *succ=NULL;
    while (head != NULL) {
    succ = head->next;   
    head->next = prev;   
    prev = head;         
    head = succ;         
}

return prev;//new head
    
}
//recursive
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;

    struct ListNode* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
