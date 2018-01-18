/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public TreeNode constructMaximumBinaryTree(int[] nums) {
        return constructTree(nums, 0, nums.length - 1);
    }

    private TreeNode constructTree(int[] nums, int begin, int end) {
        if(begin == end) return new TreeNode(nums[begin]);
        int max = begin, number = nums[begin];
        for(int i = begin + 1; i <= end; i++) {
            if(nums[i] > number) {
                max = i;
                number = nums[i];
            }
        }
        TreeNode result = new TreeNode(nums[max]);
        if(max > begin) {
            result.left = constructTree(nums, begin, max - 1);
        }
        if(max < end) {
            result.right = constructTree(nums, max + 1, end);
        }
        return result;
    }
}