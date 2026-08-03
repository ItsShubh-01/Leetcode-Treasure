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
    ListNode* insertionSortList(ListNode* head) {
        if(head->next==nullptr) return head;
        ListNode* newhead = new ListNode(0, head);
        int count=1;
        ListNode* temp = head;
        while(temp->next) {
            count++;
            ListNode* temp2 = newhead;
            int cnt=0;
            while(cnt<count) {
                if(temp2!=temp && temp2->next->val >= temp->next->val) {
                    ListNode* tempp = temp->next;
                    temp->next = temp->next->next;
                    ListNode* temp2next = temp2->next;
                    temp2->next = tempp;
                    tempp->next = temp2next;
                    break;
                }
                cnt++;
                temp2=temp2->next;
            }
            if(cnt==count) {
                temp=temp->next;
            }
        }
        return newhead->next;
    }
};
