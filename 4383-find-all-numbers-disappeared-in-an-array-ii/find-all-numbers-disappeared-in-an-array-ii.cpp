class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>ans ;
        sort(nums.begin() , nums.end()) ;
        int start = lower ;
        for(int x : nums)
        {
            if(x < lower || x > upper) continue ;
            if(start < x) ans.push_back({start , x - 1}) ;
            start = x + 1 ;
        }
        if(start <= upper) ans.push_back({start , upper}) ;
        return ans ;
    }
};