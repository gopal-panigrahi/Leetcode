// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

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
  int pairSum(ListNode *head) {
    int n = 0;
    ListNode *ptr = head;
    while (ptr != nullptr) {
      n++;
      ptr = ptr->next;
    }

    vector<int> sum_keeper(n / 2);
    ptr = head;
    int index = 0;
    while (ptr != nullptr) {
      if (index * 2 < n) {
        sum_keeper[index] = ptr->val;
      } else {
        sum_keeper[n - index - 1] += ptr->val;
      }
      index++;
      ptr = ptr->next;
    }

    return *max_element(sum_keeper.begin(), sum_keeper.end());
  }
};