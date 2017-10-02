// 这个题要笑死我了，有可能输入的链表长度不够，出现空指针。。所以我 Catch 了一下，直接
// 返回 null 就对了 23333
/*
public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
    public ListNode FindKthToTail(ListNode head,int k) {
        try {
            ListNode tail = head;
        	for(int i = 0; i < k; i++){
            	tail = tail.next;
        	}
        	while(tail != null) {
            	head = head.next;
            	tail = tail.next;
        	}
        	return head;
        } catch (Exception e) {
            return null;
        }
    }
}