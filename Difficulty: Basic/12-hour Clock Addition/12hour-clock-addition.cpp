class Solution {
  public:
    int clockSum(int x, int y) {
        return ((x - 1 + y) % 12) + 1;
    }
};