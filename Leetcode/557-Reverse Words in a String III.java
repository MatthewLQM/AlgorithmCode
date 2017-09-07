//use StringBuffer to speed up;
public class Solution {
    public String reverseWords(String s) {
        StringBuffer result = new StringBuffer("");
        String[] splitResult = s.split(" ");
        for (int i = 0 ; i < splitResult.length ; i++ ) {
            result.append(new StringBuffer(splitResult[i]).reverse());
            if(i != splitResult.length-1) result.append(" ");
        }
        return result.toString();
    }
}