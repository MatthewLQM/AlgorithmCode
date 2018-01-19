class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> result = new ArrayList<>();
        for(int i = left; i <= right; i++) {
            if(isSelfDividingNumbers(i)) result.add(i);
        }
        return result;
    }
    
    private boolean isSelfDividingNumbers(int number) {
        int temp = number;
        while(number != 0) {
            int lastNumber = number % 10;
            if(lastNumber == 0) return false;
            if(temp % lastNumber != 0) return false;
            number /= 10;
        }
        return true;
    }
}