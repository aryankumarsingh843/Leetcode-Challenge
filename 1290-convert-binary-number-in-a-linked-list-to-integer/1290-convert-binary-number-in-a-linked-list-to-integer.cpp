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
    int getDecimalValue(ListNode* head) {
        vector <int> arr;
        ListNode* temp = head;

        while (temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();

        int sum = 0;
        int x = 1;

        for (int i=n-1; i>=0; i--){
            sum += arr[i]*x;
            x*=2;
        }

        return sum;
    }
};