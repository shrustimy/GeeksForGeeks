class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* temp=head;
        Node* next;
        while(temp!=NULL)
        {
            if(temp->next==NULL)
            head =temp;
            next=temp->next;
            temp->next=temp->prev;
            temp->prev=next;
            temp=next;
        }
        return head;
    }
};
