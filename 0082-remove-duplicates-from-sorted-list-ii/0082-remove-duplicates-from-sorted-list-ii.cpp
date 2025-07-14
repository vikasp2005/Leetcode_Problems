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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* temp=head,*prev;
        while(temp!=NULL&&temp->next!=NULL)
        {
            int d=0;
            while(temp->next!=NULL&&temp->val==temp->next->val)
            {
                d=1;
                temp->next=temp->next->next;
            }
            if(d)
            {
                if(temp==head) head=temp->next;
                else {
                    prev->next=temp->next;
                    temp=prev;
                }
            }
            prev=temp;
            temp=temp->next;
        }
        return head;

    }
};