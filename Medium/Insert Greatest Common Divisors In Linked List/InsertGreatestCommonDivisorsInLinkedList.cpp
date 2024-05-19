// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list

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
  ListNode *insertGreatestCommonDivisors(ListNode *head) {
    ListNode *ptr = head;
    while (ptr->next) {
      int result = __gcd(ptr->val, ptr->next->val);
      ListNode *node = new ListNode(result, ptr->next);
      ptr->next = node;
      ptr = node->next;
    }
    return head;
  }
};