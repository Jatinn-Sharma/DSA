class Solution {
    void nop(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, vector<int>& freq) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!freq[i]) {
                freq[i] = 1;
                temp.push_back(nums[i]);
                nop(nums, temp, ans, freq);
                temp.pop_back();
                freq[i] = 0;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> freq(nums.size(), 0); // initialize with 0
        nop(nums, temp, ans, freq);
        return ans;
    }
};
