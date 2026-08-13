class Solution {
public:
    int countElements(vector<int>& nums) {
        int minElement = *min_element(nums.begin(), nums.end());
        int maxElement = *max_element(nums.begin(), nums.end());

        int count = 0;

        for (int num : nums) {
            if (num > minElement && num < maxElement) count++;
        }

        return count;
    } 
};