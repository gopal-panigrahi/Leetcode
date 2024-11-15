/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode GetIntersectionNode(ListNode headA, ListNode headB) {
        ListNode t1 = headA, t2 = headB;

        while(t1 != null || t2 != null) {
            if(t1 == null) {
                t1 = headB;
            }
            if(t2 == null) {
                t2 = headA;
            }

            if(t1 == t2) {
                return t1;
            }
            t1 = t1.next;
            t2 = t2.next;
        }

        return null;
    }
}