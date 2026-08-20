class Solution {
  public:
    bool isPalindrome(int n) {
        n = abs(n);

        int original = n;
        int rev = 0;

        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }

        return original == rev;
    }
};