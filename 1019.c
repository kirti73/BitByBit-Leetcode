int* nextLargerNodes(struct ListNode* head, int* returnSize) {
    int arr[10000];
    int n = 0;
    while (head != NULL) {
        arr[n++] = head->val;
        head = head->next;
    }
int* ans = (int*)calloc(n, sizeof(int));
    int stack[10000];
    int top = -1;
    for (int i = 0; i < n; i++) {
        while (top >= 0 && arr[stack[top]] < arr[i]) {
            ans[stack[top]] = arr[i];
            top--;
        }
        stack[++top] = i;
    }

    *returnSize = n;
    return ans;
}
