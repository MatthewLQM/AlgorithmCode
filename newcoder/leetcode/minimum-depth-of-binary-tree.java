/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
public class Solution {
    public int run(TreeNode root) {
        if(root == null) return 0;
        int result = 1;
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        while(queue.size() != 0) {
            int n = queue.size();
            while(n != 0) {
                TreeNode node = queue.poll();
                if(node.left == null && node.right == null) return result;
                if (node.left != null) {
                        queue.add(node.left);
                    }
                    if (node.right != null) {
                        queue.add(node.right);
                    }
                n--;
            }
            result++;
        }
        return 0;
    }
}