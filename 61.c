/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode *temp=head,*prev=head;
    int c=1;
     if(head==NULL || head->next==NULL) return head;
        else{
    while(temp->next!=NULL)
        {
            c++;
            temp=temp->next;
        }
        k=k%c;
        temp=head;
    while(k--)
    {  
        {
            while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        temp->next=head;
        head=temp;
        }
    }}
   return head; 
}
