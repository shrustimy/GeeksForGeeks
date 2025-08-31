class Solution {
  public:
    bool isPalindrome(Node *head) {
        vector<int> values;
        Node* temp=head;
        while(temp!=NULL){
            values.push_back(temp->data);
            temp=temp->next;
        }
        int size=values.size();
        for(int i=0,j=size-1;i<(size/2);i++,j--)
        {
            if(values[i]!=values[j])
            {
                return false;
            }
        }
        return true;
        }
};