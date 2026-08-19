class Solution {
public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;
        
        long long sum = n * (n + 1) / 2;
        
        for (int x : arr) {
            sum -= x;
        }
        
        return (int)sum;
    }
};