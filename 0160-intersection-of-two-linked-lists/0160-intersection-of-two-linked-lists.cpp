/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempa = headA;
        ListNode* tempb = headB;

        int lenA = 0;

        while (tempa != NULL){
            lenA++;
            tempa = tempa->next;
        }

        int lenB = 0;

        while (tempb != NULL){
            lenB++;
            tempb = tempb->next;
        }

        tempa = headA;
        tempb = headB;

        if (lenA > lenB){
            int diff = lenA - lenB;

            for (int i=1; i<=diff; i++){
                tempa = tempa->next;
            }

            while (tempa != tempb){
                tempa = tempa->next;
                tempb = tempb->next;
            }
            return tempb;
        }
        else {
            int diff = lenB - lenA;

            for (int i=1; i<=diff; i++){
                tempb = tempb->next;
            }

            while (tempa != tempb){
                tempa = tempa->next;
                tempb = tempb->next;
            }

            return tempa;
        }
    }
};