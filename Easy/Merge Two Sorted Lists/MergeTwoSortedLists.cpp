// https://leetcode.com/problems/merge-two-sorted-lists

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
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode *res = new ListNode(), *ptr = res;
    while (l1 && l2) {
      if (l1->val <= l2->val) {
        merge(l2->val, ptr, l1);
      } else {
        merge(l1->val, ptr, l2);
      }
    }
    if (l1 != nullptr) {
      ptr->next = l1;
    }
    if (l2 != nullptr) {
      ptr->next = l2;
    }

    return res->next;
  }
  inline void merge(int end, ListNode *&res, ListNode *&list) {
    res->next = list;
    while (list->next && list->next->val <= end) {
      list = list->next;
    }
    res = list;
    list = list->next;
  }
};