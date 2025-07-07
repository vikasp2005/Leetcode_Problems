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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL) return head;
        int i=0;
        ListNode* temp=head,*temp1;
        while(temp!=NULL)
        {
            temp1=temp;
            temp=temp->next;
            i++;
        }
        temp1->next=head;
        temp=head;
        int step=i-k%i;
        while(step)
        {
            temp1=temp;
            temp=temp->next;
            step--;
        }
        temp1->next=NULL;
        return temp;
    }
};