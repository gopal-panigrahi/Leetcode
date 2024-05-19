// https://leetcode.com/problems/swapping-nodes-in-a-linked-list

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
  ListNode *swapNodes(ListNode *head, int k) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    ListNode *start = head, *lagging_ptr = head, *leading_ptr;
    for (int i = 1; i < k; i++) {
      start = start->next;
    }

    leading_ptr = start;
    while (leading_ptr->next) {
      leading_ptr = leading_ptr->next;
      lagging_ptr = lagging_ptr->next;
    }
    swap(start->val, lagging_ptr->val);
    return head;
  }
};