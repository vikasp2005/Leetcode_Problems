/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head->next==NULL) return head;
        stack<ListNode*> s;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            while(!s.empty() && s.top()->val<temp->val)
            {
                s.pop();
            }
            s.push(temp);
            temp=temp->next;
        }
        ListNode* res=NULL;
        while(!s.empty())
        {
            temp=s.top();
            temp->next=res;
            res=temp;
            s.pop();
        }
        return res;
    }
};