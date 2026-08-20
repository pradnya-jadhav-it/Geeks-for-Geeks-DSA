class Solution {
public:
    vector<int> removeDuplicates(vector<int>& nums) {

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {

            if(i == 0 || nums[i] != nums[i - 1]) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};