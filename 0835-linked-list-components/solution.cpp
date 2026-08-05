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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int& i:nums) hash[i]++;
        ListNode* temp=head;
        int count=0;
        bool cont = false;
        while(temp) {
            if(hash[temp->val] && !cont) {count++;cont=true;}
            else if(hash[temp->val]==0) cont=false;
            temp=temp->next;
        }
        return count;
    }
};
