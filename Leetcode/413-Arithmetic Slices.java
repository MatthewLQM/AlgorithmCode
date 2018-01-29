class Solution {
    public int numberOfArithmeticSlices(int[] A) {
        int now = 0, result = 0;
        for (int i = 2; i < A.length; i++)
            if (A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
                now += 1;
                result += now;
            } else {
                now = 0;
            }
        return result;
    }
}