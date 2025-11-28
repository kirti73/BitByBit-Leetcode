/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* temp, * prev;
    Node* addOne(Node* head) {
        // Your Code here
        Node* temp=head, *not9=NULL;
        while(temp!=NULL)
        {
            if (temp->data!=9)
                not9=temp;
            temp=temp->next;
        }
        if (not9!=NULL)
        {
            not9->data+=1;
            while(not9->next!=NULL)
        {
            not9=not9->next;
            not9->data=0;
        }
        }
        else
        {
            Node* newHead= new Node(1);
            newHead->next=head;
            while(head!=NULL)
        {
            head->data=0;
            head=head->next;
        }
        head=newHead;
            
        }
        return head;
        
        
        // return head of list after adding one
    }
};
