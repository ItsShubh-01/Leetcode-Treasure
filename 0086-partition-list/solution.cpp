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
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr || head->next == nullptr) return head;
        ListNode* temp = new ListNode();
        ListNode* temp2 = temp;

        while(head && head->val >= x) {
            temp2->next=head;
            head = head->next;
            temp2=temp2->next;
            temp2->next=NULL;
        }
        if(head==nullptr) return temp->next;
        ListNode* prev=head;
        ListNode* curr = head->next;
        while(curr) {
            ListNode* next = curr->next;
            if(curr->val < x) {
                prev->next = curr;
                prev= prev->next;
                prev->next = NULL;
            }
            else {
                temp2->next = curr;
                temp2=temp2->next;
                temp2->next=NULL;
            }
            curr=next;
        }
        prev->next = temp->next;
        return head;
    }
};
