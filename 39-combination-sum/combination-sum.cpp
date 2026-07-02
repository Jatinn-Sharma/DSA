class Solution {
    void helper(vector<int>& candidates, int target, vector<int>& temp, int idx, vector<vector<int>>& res) {
        if (target == 0) {
            res.push_back(temp); // found a valid combination
            return;
        }
        if (target < 0) return; // overshoot

        for (int i = idx; i < candidates.size(); i++) {
            temp.push_back(candidates[i]);
            // allow reuse of the same element, so pass i (not i+1)
            helper(candidates, target - candidates[i], temp, i, res);
            temp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        helper(candidates, target, temp, 0, res);
        return res;
    }
};
