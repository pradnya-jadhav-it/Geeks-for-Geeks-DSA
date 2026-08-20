class Solution {
  public:
    int totalDigits(int n) {
        int count = 0;

        for (int i = 1; i <= n; i++) {
            int x = i;

            while (x > 0) {
                count++;
                x /= 10;
            }
        }

        return count;
    }
};