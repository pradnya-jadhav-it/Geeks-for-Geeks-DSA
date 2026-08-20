class Solution {
  public:
    int nthTerm(int a, int r, int n) {
        long long mod = 1000000007;
        long long ans = a;

        for (int i = 1; i < n; i++) {
            ans = (ans * r) % mod;
        }

        return ans;
    }
};