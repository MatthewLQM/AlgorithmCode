class Solution {
    public int countPrimeSetBits(int L, int R) {
        int result = 0;
        for (int i = L; i <= R; i++) {
            if (isPrime(countBits(i))) result++;
        }
        return result;
    }

    public int countBits(int num) {
        if (num == 1) return 1;
        else return countBits(num / 2) + (num & 1);
    }

    public boolean isPrime(int number) {
        if(number == 1) return false;
        long upper = Math.round(Math.sqrt(number));
        for (int i = 2; i <= upper; i++) {
            if (number % i == 0) return false;
        }
        return true;
    }
}