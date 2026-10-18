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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector <int> arr;

        while (temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        for (int i=1; i<arr.size(); i++){
            int j=i;
            while (j>0){
                if (arr[j] > arr[j-1]) break;
                else swap(arr[j], arr[j-1]);
                j--;
            }
        }

        temp = head;
        int k=0;

        while (temp != NULL){
            temp->val = arr[k];
            temp = temp->next;
            k++;
        }

        return head;
    }
};