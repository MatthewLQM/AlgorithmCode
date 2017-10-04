import java.util.ArrayList;
public class Solution {
    public ArrayList<Integer> printMatrix(int[][] matrix) {
        ArrayList<Integer> result = new ArrayList<>();
        int row = matrix.length;//行数
        int collor = matrix[0].length;//列数
        //计算打印的圈数
        int circle = ((row < collor ? row : collor) - 1) / 2 + 1;//圈数
        for (int i = 0; i < circle; i++) {
            //从左向右打印
            for (int j = i; j < collor - i; j++)
                result.add(matrix[i][j]);
            //从上往下的每一列数据
            for (int k = i + 1; k < row - i; k++)
                result.add(matrix[k][collor - 1 - i]);
            //判断是否会重复打印(从右向左的每行数据)
            for (int m = collor - i - 2; (m >= i) && (row - i - 1 != i); m--)
                result.add(matrix[row - i - 1][m]);
            //判断是否会重复打印(从下往上的每一列数据)
            for (int n = row - i - 2; (n > i) && (collor - i - 1 != i); n--)
                result.add(matrix[n][i]);
        }
        return result;
    }
}