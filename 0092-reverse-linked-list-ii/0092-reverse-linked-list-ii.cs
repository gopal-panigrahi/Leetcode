/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode ReverseBetween(ListNode head, int left, int right) {
        if(left == right) return head;
        
        head = new ListNode(-1, head);
        ListNode curr = head;
        for(int i = 1; i < left; i++) {
            curr = curr.next;
        }

        ListNode sec_1_end = curr;
        ListNode sec_2_start = curr.next;

        ListNode prev = sec_2_start;
        curr = prev.next;
        ListNode next = curr.next;

        for(int i = left+1; i <= right; i++) {
            curr.next = prev;
            prev = curr;
            curr = next;
            next = curr?.next;
        }

        sec_1_end.next = prev;
        sec_2_start.next = curr;
        return head.next;
    }
}