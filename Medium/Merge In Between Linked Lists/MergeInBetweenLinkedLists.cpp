// https://leetcode.com/problems/merge-in-between-linked-lists

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
  ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    ListNode *ptr = list1, *a_ptr, *b_ptr;
    int index = 0;
    while (ptr) {
      if (index + 1 == a) {
        a_ptr = ptr;
      } else if (index - 1 == b) {
        b_ptr = ptr;
      }
      ptr = ptr->next;
      index++;
    }
    a_ptr->next = list2;
    while (a_ptr->next) {
      a_ptr = a_ptr->next;
    }
    a_ptr->next = b_ptr;
    return list1;
  }
};