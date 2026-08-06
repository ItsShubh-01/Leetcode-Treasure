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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        int count=0;
        ListNode* tail=list2;
        while(tail->next) 
            tail=tail->next;
        while(temp) {
            count++;
            if(count==a) {
                ListNode* next = temp->next;
                temp->next = list2;
                temp=next;
            }
            if(count==b) {
                tail->next=temp->next;
                break;
            }
            temp=temp->next;
        }
        return list1;
    }
};
