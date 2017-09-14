class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> set = new HashSet();
        int begin = 0, end, max = 0;
        for(end = 0; end < s.length(); end++){
            boolean result = set.add(s.charAt(end));
            if(end - begin > max){
                max = end - begin;
            }
            if(!result){
                while(s.charAt(begin) != s.charAt(end)){
                    set.remove(s.charAt(begin));
                    begin++;
                }
                begin++;
            }
        }
        max = (max > end - begin)? max : end - begin;
        return max;
    }
}