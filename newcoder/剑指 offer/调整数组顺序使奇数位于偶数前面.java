public class Solution {
    public void reOrderArray(int [] array) {
        int[] result = new int[array.length];
        int location = 0;
        for(int i = 0; i < array.length; i++){
            if(array[i] % 2 == 1) {
                result[location] = array[i];
                location++;
            }
        }
        for(int i = 0; i < array.length; i++) {
            if(array[i] % 2 == 0) {
                result[location] = array[i];
                location++;
            }
        }
        System.arraycopy(result, 0, array, 0, array.length);
    }
}