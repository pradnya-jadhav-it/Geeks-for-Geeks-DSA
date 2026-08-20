class Solution {
  public:
    int sumOfGP(int n, int a, int r) {
        if (r == 1)
            return n * a;

        return a * (pow(r, n) - 1) / (r - 1);
    }
};