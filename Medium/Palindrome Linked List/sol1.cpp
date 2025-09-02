#include<stack>

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        Node* temp=head;
        stack<int> values;
        while(temp!=NULL)
        {
            values.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->data != values.top())
              return false;
             values.pop();
             temp=temp->next;
        }
        return true;
        }
};
