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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return head;
        map<int,int> hash;
        ListNode* temp=head;
        while(temp) {
            hash[temp->val]++;
            temp=temp->next;
        }
        ListNode* head2 = new ListNode();
        temp = head2;
        for(auto& it:hash) {
            if(it.second==1) {
                temp->next = new ListNode(it.first);
                temp=temp->next;
            }
        }
        return head2->next;
    }
};
