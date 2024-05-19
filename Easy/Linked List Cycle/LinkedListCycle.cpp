// https://leetcode.com/problems/linked-list-cycle

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
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  }
  bool hasCycle(ListNode *head) {
    if (!head) {
      return false;
    }
    ListNode *ptr1 = head, *ptr2 = ptr1;
    while (ptr1 && ptr1->next) {
      ptr1 = (ptr1->next)->next;
      ptr2 = ptr2->next;
      if (ptr1 == ptr2) {
        return true;
      }
    }
    return false;
  }
};