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
    ListNode* rotateRight(ListNode* head, int k) {
       if (head == NULL || head->next == NULL || k == 0) return head;

       int size = 0;
       ListNode* temp = head;

       while (temp != NULL){
        size++;
        temp = temp->next;
       }

       k = k%size;
       if (k==0) return head;

       ListNode* newTail = head;

       for (int i=1; i<size-k; i++){
        newTail = newTail->next;
       }

       ListNode* newHead = newTail->next;
       temp = head;

       while (temp->next != NULL){
        temp = temp->next;
       }

       temp->next = head;
       newTail->next = NULL;
       return newHead;
    }
};