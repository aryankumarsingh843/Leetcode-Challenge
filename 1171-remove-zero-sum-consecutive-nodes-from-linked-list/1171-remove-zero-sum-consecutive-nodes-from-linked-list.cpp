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
    ListNode* removeZeroSumSublists(ListNode* head) {
     ListNode* dummy = new ListNode(0);
     dummy->next = head;

     unordered_map<int, ListNode*> ans;
     ans[0] = dummy;

     int sum = 0;
     ListNode* curr = dummy;

     while (curr != NULL){
        sum += curr->val;
        ans[sum] = curr;
        curr = curr->next;
     }

     sum = 0;
     curr = dummy;

     while (curr != NULL){
        sum += curr->val;
        curr->next = ans[sum]->next;
        curr = curr->next;
     }

     return dummy->next;
    }
};