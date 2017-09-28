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
    public ArrayList<ArrayList<Integer>> zigzagLevelOrder(TreeNode root) {
            ArrayList<ArrayList<Integer>> result = new ArrayList<>();
            Queue<TreeNode> queue = new LinkedList<>();
            boolean left = true;
            if (root != null) {
                queue.add(root);
            }
            while (queue.size() != 0) {
                int n = queue.size();
                ArrayList<Integer> temp = new ArrayList<>();
                while (n != 0) {
                    TreeNode node = queue.poll();
                    if (node.left != null) {
                        queue.add(node.left);
                    }
                    if (node.right != null) {
                        queue.add(node.right);
                    }
                    temp.add(node.val);
                    n--;
                }
                if (result.size() % 2 != 0) {
                    Collections.reverse(temp);
                }
                result.add(temp);
            }
            return result;
        }
}