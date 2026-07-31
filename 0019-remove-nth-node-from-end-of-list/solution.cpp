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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp=head;
        while(temp) {count++; temp=temp->next;}
        count-=n;
        if(count==0) return head->next? head->next:nullptr;
        temp=head;
        int cnt=0;
        while(temp) {
            cnt++;
            if(cnt==count) {
                temp->next=temp->next->next;
                return head;
            }
            temp=temp->next;
        }
        return nullptr;
    }
};
