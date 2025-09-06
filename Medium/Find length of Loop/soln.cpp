#include <unordered_map>
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node* temp=head;
        unordered_map<Node*,int> mp;
        int count=0;
        while(temp!=NULL)
        {
            mp[temp]++;
            if(mp[temp]==2)
            break;
            temp=temp->next;
        }
        if(temp==NULL){
            return count;
        }
        while(mp[temp]!=3){
            count++;
            temp=temp->next;
            mp[temp]++;
        }
        return count;
    }
};
