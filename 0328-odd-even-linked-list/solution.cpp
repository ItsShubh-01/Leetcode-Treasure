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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr) return head;
        ListNode* temp = head;
        int count=1;
        while(temp->next) {temp=temp->next; count++;}
        ListNode* tail = temp;
        temp = head;
        count/=2;
        while(count--) {
            if(temp->next) {
                ListNode* temp2 = temp->next;
                temp->next=temp->next->next;
                tail->next=temp2;
                temp2->next=nullptr;
                tail=tail->next;
                temp=temp->next;
            }
        }
        return head;
    }
};
