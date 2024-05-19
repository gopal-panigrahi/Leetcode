// https://leetcode.com/problems/merge-nodes-in-between-zeros

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
  ListNode *mergeNodes(ListNode *head) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    ListNode *ptr = head->next;
    while (ptr) {
      if (ptr->next->val == 0) {
        ptr->next = ptr->next->next;
        ptr = ptr->next;
      } else {
        ptr->val += ptr->next->val;
        ptr->next = ptr->next->next;
      }
    }

    return head->next;
  }
};