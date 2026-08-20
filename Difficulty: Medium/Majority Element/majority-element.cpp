class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        int n = arr.size();
        int count = 1;

        for(int i = 1; i < n; i++) {

            if(arr[i] == arr[i-1])
                count++;
            else
                count = 1;

            if(count > n/2)
                return arr[i];
        }

        if(n == 1)
            return arr[0];

        return -1;
    }
};