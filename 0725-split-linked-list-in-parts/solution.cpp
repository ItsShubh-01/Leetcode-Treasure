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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        while(temp) {count++; temp=temp->next;}

        int val = count/k;
        int num = count%k;

        vector<ListNode*> arr;
        temp=head;
        for(int i=0; i<k; i++) {
            int partSize = val;
            if(i < num)
                partSize++;
            ListNode* partHead = temp;
            for(int j=1;j<partSize && temp;j++)
                temp=temp->next;
            if(temp){
                ListNode* nxt=temp->next;
                temp->next=nullptr;
                temp=nxt;
            }
            arr.push_back(partHead);
        }
        return arr;
    }
};
