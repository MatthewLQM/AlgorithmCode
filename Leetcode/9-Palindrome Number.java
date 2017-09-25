class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0) return false;
        String a = String.valueOf(x);
        for(int index = 0; index < a.length()/2 + 1; index++){
            if(a.charAt(index) != a.charAt(a.length() - index - 1)){
                return false;
            }
        } 
        return true;   
    }
}