class Solution {
    public boolean hasAlternatingBits(int n) {
        if(n == 0 || n == 1) return true;
        int flag = n % 2;
        while(n > 0) {
            n /= 2;
            if(n % 2 == flag) return false;
            flag = 1 - flag;
        }
        return true;
    }
}