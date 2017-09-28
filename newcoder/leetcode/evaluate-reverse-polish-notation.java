import java.util.Stack;
public class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < tokens.length; i++) {
            if (tokens[i].equals("+")) {
                Integer a = stack.pop();
                Integer b = stack.pop();
                stack.add(a + b);
            } else if (tokens[i].equals("-")) {
                Integer a = stack.pop();
                Integer b = stack.pop();
                stack.add(b - a);
            } else if (tokens[i].equals("*")) {
                Integer a = stack.pop();
                Integer b = stack.pop();
                stack.add(b * a);
            } else if (tokens[i].equals("/")) {
                Integer a = stack.pop();
                Integer b = stack.pop();
                stack.add(b / a);
            } else {
                stack.add(Integer.valueOf(tokens[i]));
            }
        }
        return stack.peek();
    }
}