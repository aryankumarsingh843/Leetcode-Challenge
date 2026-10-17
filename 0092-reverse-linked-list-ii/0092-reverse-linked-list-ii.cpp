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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
  // Convert All LinkedLsit into array

  ListNode* temp = head;
  vector <int> arr;

  while (temp != NULL){
    arr.push_back(temp->val);
    temp = temp->next;
  }

  // Reverse Part

  int i=left-1;
  int j=right-1;

  while (i<=j){
    int reverse = arr[i];
    arr[i] = arr[j];
    arr[j] = reverse;
    i++;
    j--;
  }

 // Convert into linkedlist

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