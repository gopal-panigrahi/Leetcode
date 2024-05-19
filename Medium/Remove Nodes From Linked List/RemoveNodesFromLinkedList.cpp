// https://leetcode.com/problems/remove-nodes-from-linked-list

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
  ListNode *removeNodes(ListNode *head) {
    ListNode *tail = inverse(head);

    ListNode *prev = tail, *current = tail;
    int rightMax = 0;
    while (current != nullptr) {
      if (current->val < rightMax) {
        prev->next = current->next;
      } else {
        prev = current;
      }
      rightMax = max(rightMax, current->val);
      current = current->next;
    }

    return inverse(tail);
  }

  ListNode *inverse(ListNode *head) {
    ListNode *prev = nullptr, *current = head, *next;

    while (current != nullptr) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }

    return prev;
  }
};