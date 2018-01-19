class Solution {
    public String complexNumberMultiply(String a, String b) {
        int[] ca = split(a);
        int[] cb = split(b);
        StringBuilder result = new StringBuilder();
        result.append(ca[0] * cb[0] - ca[1] * cb[1]);
        result.append('+');
        result.append(ca[0] * cb[1] + ca[1] * cb[0]);
        result.append('i');
        return result.toString();
    }

    private int[] split(String a) {
        String[] splitResult = a.split("\\+");
        int[] result = new int[2];
        result[0] = Integer.parseInt(splitResult[0]);
        StringBuilder temp = new StringBuilder();
        for(int i = 0; i < splitResult[1].length() - 1; i++) {
            temp.append(splitResult[1].charAt(i));
        }
        result[1] = Integer.parseInt(temp.toString());
        return result;
    }
}