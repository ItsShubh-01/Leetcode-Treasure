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
    ListNode* doubleIt(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int carry = 0;
        for(int i=arr.size()-1; i>=0; i--) {
            int temp2 = arr[i]*2/10;
            arr[i] = (arr[i]*2+carry)%10;
            carry = temp2;
        }

        if(carry) {
            temp=head;
            head = new ListNode(1, temp);
            temp=head->next;
        }
        else temp = head;
        int count=0;
        while(temp) {
            temp->val = arr[count++];
            temp=temp->next;
        }
        return head;
    }
};
