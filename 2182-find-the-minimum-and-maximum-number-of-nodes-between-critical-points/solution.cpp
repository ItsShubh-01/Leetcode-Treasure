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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next==nullptr) return {-1,-1};
        vector<int> arr;
        ListNode* temp=head;
        int count=1;
        while(temp->next->next) {
            count++;
            if(temp->next->val < temp->val && temp->next->val < temp->next->next->val) arr.push_back(count);
            if(temp->next->val > temp->val && temp->next->val > temp->next->next->val) arr.push_back(count);
            temp  = temp->next;
        }
        if(arr.size()<2) return {-1,-1};
        int mini = INT_MAX;
        for(int i=1; i<arr.size(); i++) 
            mini = min(arr[i]-arr[i-1], mini);
        int maxi = arr.back()-arr[0];
        return {mini, maxi};
    }
};
