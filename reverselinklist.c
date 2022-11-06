class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *newHead= 0;
        while(head != 0)
        {
            ListNode *next=head->next;
            head->next=newHead;
            newHead=head;
            head=next;
        }
        return newHead;
    }
};

