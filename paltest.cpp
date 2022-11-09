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
public:while
    bool isPalindrome(ListNode* head) {
       //find mid
       ListNode *fast=head;
       ListNode *slow=head;

       while(fast->next!=nullptr&&fast->next->next!=nullptr)
       {
           slow=slow->next;
           fast=fast->next->next;
       }

       if(fast!=nullptr)
       {
           slow=slow->next;
       }


       ListNode* revhead=reverse(slow);

       while(revhead!=nullptr)
       {
           if(revhead->val!=head->val)
           {
               return false;
           }
           else
           {
               revhead=revhead->next;
               head=head->next;
           }
       }
       return true;
    }
    bool ListNode* reverse(ListNode* head)
    {
        ListNode* prev-nullptr;
        while(head!=nullptr)
        {
            ListNode* next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
};
