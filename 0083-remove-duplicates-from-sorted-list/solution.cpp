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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(!head) return head;
        
        ListNode* prev = head;
        ListNode* tail = head->next;
        while(tail)
        {
            if(tail->val == prev->val)
                tail = tail->next;
            else{
                prev->next = tail;
                prev = tail;
                tail = tail->next;
            }
        }
        prev->next = NULL;
        return head;
    }
};
