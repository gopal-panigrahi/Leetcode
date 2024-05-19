// https://leetcode.com/problems/remove-linked-list-elements

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
  ListNode *removeElements(ListNode *head, int val) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    head = new ListNode(0, head);
    ListNode *ptr = head;
    while (ptr->next) {
      if (ptr->next->val == val) {
        ptr->next = ptr->next->next;
      } else {
        ptr = ptr->next;
      }
    }

    return head->next;
  }
};