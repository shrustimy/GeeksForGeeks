class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node* temp=head;
        int cnt=0;
         while(temp!=NULL)
         {
             cnt++;
             temp=temp->next;
         }
         temp=head;
         int mid=cnt/2;
         for(int i=0;i<mid;i++)
         {
             temp=temp->next;
         }
         return temp->data;
    }
};
