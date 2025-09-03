class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
        Node* temp=head;
        Node* end=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        temp=head;
        int lastctr= size-k;
        int data;
        if(k<=size){
            for(int i=1;i<k;i++)
             temp=temp->next;
            for(int i=1;i<=lastctr;i++) 
             end = end->next;
            data = temp->data;
            temp->data= end->data;
            end->data=data;
            return head;
        }
        return head;
    }
};
