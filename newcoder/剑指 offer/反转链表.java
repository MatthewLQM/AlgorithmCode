/*
public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
    public ListNode ReverseList(ListNode head) {
        if(head == null) return null;
		ListNode result = new ListNode(head.val);
        while(head.next != null) {
            head = head.next;
            ListNode temp = new ListNode(head.val);
            temp.next = result;
            result = temp;
        }
        return result;
    }
}