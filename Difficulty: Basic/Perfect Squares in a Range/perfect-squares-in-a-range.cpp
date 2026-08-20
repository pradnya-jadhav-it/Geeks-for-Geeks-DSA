
class Solution {
  public:
    int numOfPerfectSquares(int a, int b) {
        int count = 0;
        
        for (int i = 1; i * i <= b; i++) {
            if (i * i >= a) {
                count++;
            }
        }
        
        return count;
    }
};