class Solution {
    public int romanToInt(String s) {
        int result = 0, state = 0;
        for(int i = 0; i < s.length(); i++) {
            int now = 0;
            switch (s.charAt(i)) {
                case 'I' : now = 1; break;
                case 'V' : now = 5; break;
                case 'X' : now = 10; break;
                case 'L' : now = 50; break;
                case 'C' : now = 100; break;
                case 'D' : now = 500; break;
                case 'M' : now = 1000; break;
            }
            if(now > state) result += now - state * 2;
            else result += now;
            state = now;
        }
        return result;
    }
}