class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int i = nums.size();

        for(int k = 0; k < i; k++)
        {
            sort(nums[k].begin(), nums[k].end(), greater<int>());
        }

        int ans = 0;

        for(int j = 0; j < nums[0].size(); j++)
        {
            int maxi = 0;

            for(int k = 0; k < nums.size(); k++)
            {
                maxi = max(maxi, nums[k][j]);
            }

            ans += maxi;
        }

        return ans;
    }
};