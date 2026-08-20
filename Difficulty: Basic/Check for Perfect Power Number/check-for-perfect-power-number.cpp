class Solution {
  public:
    bool checkPower(int n) {
        if (n == 1)
            return true;
        
        for (int x = 2; x * x <= n; x++) {
            long long power = 1;
            
            while (power < n) {
                power *= x;
                
                if (power == n)
                    return true;
                
                if (power > n)
                    break;
            }
        }
        
        return false;
    }
};