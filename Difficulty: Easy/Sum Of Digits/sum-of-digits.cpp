class Solution {
  public:
    int sumOfDigits(int n) {
        int sum = 0;
        for(int  num = n; num > 0; sum += num % 10, num /= 10);
        return sum;
    }
};