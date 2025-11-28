struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    bool hash[100001] = {false};
    for (int i = 0; i < numsSize; i++)
        hash[ nums[i] ] = true;
    struct ListNode *temp = head, *prev = NULL;
    while (temp != NULL) {
        if (hash[temp->val]) {
            if (prev == NULL) {
                head = temp->next;
                free(temp);
                temp = head;
            } else {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}
