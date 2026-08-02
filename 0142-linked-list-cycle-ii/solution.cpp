/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> hash;
        ListNode* curr = head;
        ListNode* req;
        while(curr)
        {
            hash[curr]++;
            if(hash[curr]==2){
                return curr;
            }
            curr = curr->next;
        }
        return nullptr;
    
    }
};
