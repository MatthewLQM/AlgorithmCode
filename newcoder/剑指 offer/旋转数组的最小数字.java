import java.util.ArrayList;
public class Solution {
    public int minNumberInRotateArray(int [] array) {
    	if(array.length == 0) return 0;
        int result = array[0], last = array[0];
        for(int i = 1; i < array.length; i++) {
            if(array[i] < last) return array[i];
            else last = array[i];
        }
        return result;
    }
}