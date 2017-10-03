/**
public class TreeNode {
    int val = 0;
    TreeNode left = null;
    TreeNode right = null;
    public TreeNode(int val) {
        this.val = val;
    }
}
*/
public class Solution {
    public void Mirror(TreeNode root) {
        if(root == null) return;
        if(root.left == null && root.right == null) return;
        if(root.left == null) {
            Mirror(root.right);
            root.left = root.right;
            root.right = null;
        } else if(root.right == null) {
            Mirror(root.left);
            root.right = root.left;
            root.left = null;
        } else {
            Mirror(root.left);
            Mirror(root.right);
            TreeNode temp = root.left;
            root.left = root.right;
            root.right = temp;
        }
    }
}