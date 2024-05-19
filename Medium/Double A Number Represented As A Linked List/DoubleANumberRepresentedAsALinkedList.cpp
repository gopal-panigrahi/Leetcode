// https://leetcode.com/problems/double-a-number-represented-as-a-linked-list

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
  ListNode *doubleIt(ListNode *head) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    if (!head) {
      return head;
    }
    head = new ListNode(0, head);

    int val = 0;
    ListNode *ptr = head;
    while (ptr->next) {
      val = ptr->next->val * 2;
      ptr->val += val / 10;
      ptr->next->val = val % 10;
      ptr = ptr->next;
    }

    return head->val == 0 ? head->next : head;
  }
};