// https://leetcode.com/problems/swap-nodes-in-pairs

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
  ListNode *swapPairs(ListNode *head) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    if (!head) {
      return head;
    }

    head = new ListNode(-1, head);
    ListNode *ptr = head->next, *prev = head, *temp;

    while (ptr && ptr->next) {
      prev->next = ptr->next;

      temp = ptr->next->next;
      ptr->next->next = ptr;
      ptr->next = temp;

      prev = ptr;
      ptr = ptr->next;
    }

    return head->next;
  }
};