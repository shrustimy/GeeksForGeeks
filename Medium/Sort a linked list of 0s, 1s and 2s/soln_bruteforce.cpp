class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int cnt0,cnt1,cnt2;
        Node* temp=head;
        cnt0=0;
        cnt1=0;
        cnt2=0;
        while(temp!=NULL){
            if(temp->data==0)
            cnt0++;
            if(temp->data==1)
            cnt1++;
            if(temp->data==2)
            cnt2++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<cnt0;i++){
            temp->data=0;
            temp=temp->next;
        }
        for(int i=0;i<cnt1;i++){
            temp->data=1;
            temp=temp->next;
        }
        for(int i=0;i<cnt2;i++){
            temp->data=2;
            temp=temp->next;
        }
        return head;
        
    }
};
