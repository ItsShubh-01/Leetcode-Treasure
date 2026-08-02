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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        if(left==1) {
            ListNode* temp1 = head;
            ListNode* temp = head;
            int cnt=1;
            ListNode* prev = nullptr;
            while(cnt<right) {
                cnt++;
                ListNode* next = temp->next;
                temp->next = prev;
                prev = temp;
                temp = next;
            }
            temp1->next = temp->next;
            temp->next = prev;
            return temp;
        }
        ListNode* temp=head;
        int cnt=1;
        while(cnt<left-1) {
            cnt++;
            temp=temp->next;
        }
        ListNode* temp2 = temp;
        ListNode* temp3 = temp->next;
        temp=temp->next;
        cnt++;
        ListNode* prev = nullptr;
        while(cnt<right) {
            cnt++;
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        ListNode* next = temp->next;
        temp->next = prev;
        temp2->next = temp;
        temp3->next = next;
        return head;
    }
};
