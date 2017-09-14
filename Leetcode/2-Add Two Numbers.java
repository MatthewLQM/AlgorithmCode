/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummyHead = new ListNode(0);
        ListNode p = l1, q = l2, curr = dummyHead;
        int carry = 0;
        while(p != null || q != null){
            int x = (p == null) ? 0 : p.val;
            int y = (q == null) ? 0 : q.val;
            int num = x + y + carry;
            carry = num / 10;
            num = num % 10;
            curr.next = new ListNode(num);
            if(p != null)p = p.next;
            if(q != null)q = q.next;
            curr = curr.next;
            if (p == null && q == null) break;
        }
        if (carry > 0) {
        curr.next = new ListNode(carry);
        }
        return dummyHead.next;
    }
}