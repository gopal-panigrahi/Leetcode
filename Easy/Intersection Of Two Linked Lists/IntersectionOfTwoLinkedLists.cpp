// https://leetcode.com/problems/intersection-of-two-linked-lists

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
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (!headA) {
      return nullptr;
    }
    if (!headB) {
      return nullptr;
    }
    ListNode *t1, *t2, *p1 = headA, *p2 = headB;
    while (p1->next) {
      p1 = p1->next;
    }
    while (p2->next) {
      p2 = p2->next;
    }

    if (p1 != p2) {
      return nullptr;
    }

    p1 = headA;
    p2 = headB;
    while (p1 != p2) {
      p1 = p1->next;
      p2 = p2->next;
      if (p1 == nullptr) {
        p1 = headB;
      }
      if (p2 == nullptr) {
        p2 = headA;
      }
    }
    return p1;
  }
};