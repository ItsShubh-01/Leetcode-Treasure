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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int> hash;
        for(int& i:nums) hash[i]++;
        while(head && hash[head->val]) {
            ListNode* temp = head;
            head=head->next;
        }
        if(head==NULL) return head;

        ListNode* temp = head;
        ListNode* curr = head->next;
        while(curr) {
            if(hash[curr->val]==0) {
                temp->next=curr;
                temp=temp->next;
            }
            curr=curr->next;
        }
        temp->next = NULL;
        return head;
    }
};
