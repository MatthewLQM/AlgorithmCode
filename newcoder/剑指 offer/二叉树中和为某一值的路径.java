import java.util.ArrayList;
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
    public ArrayList<ArrayList<Integer>> FindPath(TreeNode root, int target) {
        ArrayList<ArrayList<Integer>> result = new ArrayList<>();
        if (root == null) return result;
        ArrayList<Integer> trace = new ArrayList<>();
        int sum = 0;
        dfs(root, target, result, trace, sum);
        return result;
    }

    public void dfs(TreeNode root, int target, ArrayList<ArrayList<Integer>> result, ArrayList<Integer> trace, int sum) {
        if (root == null) return;
        sum += root.val;
        if (root.left == null && root.right == null) {
            if (target == sum) {
                trace.add(root.val);
                result.add(new ArrayList<Integer>(trace));
                trace.remove(trace.size() - 1);
            }
            return;
        }
        trace.add(root.val);
        dfs(root.left, target, result, trace, sum);
        dfs(root.right, target, result, trace, sum);
        trace.remove(trace.size() - 1);
    }
}