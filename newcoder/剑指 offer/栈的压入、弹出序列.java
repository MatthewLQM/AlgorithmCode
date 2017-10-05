import java.util.ArrayList;
import java.util.Stack;
 
public class Solution {
    public boolean IsPopOrder(int [] pushA,int [] popA) {
        if(pushA == null || popA == null || pushA.length == 0 || popA.length == 0 || pushA.length != popA.length) return false;
        Stack<Integer> st = new Stack<Integer>();
        int i = 0;
        int j = 0;
        st.push(pushA[i++]);
        while(j <= popA.length-1){
            while(popA[j] != st.peek()){
                if(i == pushA.length) return false;
                st.push(pushA[i++]);
            }
            j++;
            st.pop();
        }
        return true;
    }
}