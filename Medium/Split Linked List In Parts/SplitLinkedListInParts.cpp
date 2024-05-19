// https://leetcode.com/problems/split-linked-list-in-parts

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
  vector<ListNode *> splitListToParts(ListNode *head, int k) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    int size = 0;
    ListNode *ptr = head;

    vector<ListNode *> parts(k);

    while (ptr) {
      size++;
      ptr = ptr->next;
    }

    int bucket = size / k;
    int remaining = size % k;

    for (int pI = 0; pI < k; pI++) {
      size = pI < remaining ? bucket + 1 : bucket;
      parts[pI] = head;
      while (--size && head) {
        head = head->next;
      }

      if (head) {
        ptr = head;
        head = head->next;
        ptr->next = nullptr;
      }
    }
    return parts;
  }
};