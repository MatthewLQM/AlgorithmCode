/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public TreeNode reConstructBinaryTree(int [] pre,int [] in) {
        if(pre.length == 1) {
            return new TreeNode(pre[0]);
        }
        int head = pre[0], i;
        TreeNode result = new TreeNode(head);
        for(i = 0; i < in.length; i++) {
            if(in[i] == head) break;
        }
        int leftLength = i, rightLength = pre.length - i - 1;
        if(leftLength != 0) {
            int[] preLeft = new int[leftLength];
            int[] inLeft = new int[leftLength];
            System.arraycopy(pre, 1, preLeft, 0, leftLength);
            System.arraycopy(in, 0, inLeft, 0, leftLength);
            result.left = reConstructBinaryTree(preLeft, inLeft);
        }
        if(rightLength != 0) {
            int[] preRight = new int[rightLength];
            int[] inRight = new int[rightLength];
            System.arraycopy(pre, 1+leftLength, preRight, 0, rightLength);
            System.arraycopy(in, 1+leftLength, inRight, 0, rightLength);
            result.right = reConstructBinaryTree(preRight, inRight);
        }
        return result;
    }
}