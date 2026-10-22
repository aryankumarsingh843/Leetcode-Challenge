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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode* temp = head;
       vector <int> arr;

       while (temp != NULL){
        arr.push_back(temp->val);
        temp = temp->next;
       }

       int n = arr.size();

       int position = n-k;

       swap(arr[k-1], arr[position]);

       temp = head;
       int i=0;

       while (temp != NULL){
        temp->val = arr[i];
        temp = temp->next;
        i++;
       }
       return head;
    }
};