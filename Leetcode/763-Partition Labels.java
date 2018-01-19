class Solution {
    public List<Integer> partitionLabels(String S) {
        List<Integer> result = new ArrayList<>();
        int[] index = new int[26];
        char[] temp = S.toCharArray();
        for(int i = 0; i < temp.length; i++) {
            index[temp[i] - 'a'] = i;
        }
        int last = 0;
        int start = 0;
        for(int i = 0; i < S.length(); i++){
            last = Math.max(last, index[S.charAt(i)-'a']);
            if(last == i){
                result.add(last - start + 1);
                start = last + 1;
            }
        }
        return result;
    }
}