class Solution {
    public int calPoints(String[] ops) {
        Stack<Integer> pointStack = new Stack<>();
        for (int i = 0; i < ops.length; i++) {
            if (ops[i].equals("C")) {
                pointStack.pop();
            } else if (ops[i].equals("D")) {
                pointStack.push(pointStack.peek() * 2);
            } else if (ops[i].equals("+")) {
                Integer temp = pointStack.pop();
                Integer next = temp + pointStack.peek();
                pointStack.push(temp);
                pointStack.push(next);
            } else {
                pointStack.push(Integer.parseInt(ops[i]));
            }
        }
        int result = 0;
        while(!pointStack.isEmpty()) {
            result += pointStack.pop();
        }
        return result;
    }
}