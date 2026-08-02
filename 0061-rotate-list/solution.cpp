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
        if(head==nullptr || head->next==nullptr) return head;
        int count=1;
        ListNode* temp=head;
        while(temp->next) {count++; temp=temp->next;}
        temp->next=head;
        k%=count;
        count=count-k;
        temp=head;
        int cnt=0;
        while(temp) {
            cnt++;
            if(cnt==count) {
                ListNode* temp2 = temp->next;
                temp->next=nullptr;
                return temp2;
            }
            temp=temp->next;
        }
        return head;
    }
};
