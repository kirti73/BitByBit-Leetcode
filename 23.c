struct ListNode* mergeTwo(struct ListNode* a, struct ListNode* b) {
    if (!a) return b;
    if (!b) return a;

    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;

    while (a && b) {
        struct ListNode* temp;
        if (a->val < b->val) {
            temp = a;
            a = a->next;
        } else {
            temp = b;
            b = b->next;
        }

        if (!head) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    tail->next = (a ? a : b);
    return head;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if (listsSize == 0) return NULL;
    if (listsSize == 1) return lists[0];

    int interval = 1;

    // Merge lists pairwise: (0,1), (2,3), (4,5) ... then repeat
    while (interval < listsSize) {
        for (int i = 0; i + interval < listsSize; i += interval * 2) {
            lists[i] = mergeTwo(lists[i], lists[i + interval]);
        }
        interval *= 2;
    }

    return lists[0];
}
