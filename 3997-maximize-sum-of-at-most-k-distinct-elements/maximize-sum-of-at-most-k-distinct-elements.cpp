class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end() , greater<int>());
        nums.erase(unique(nums.begin() , nums.end()) , nums.end()) ;
        int n = nums.size() ;
        int a = min(n , k) ;
        vector<int>ans(a); 
        for(int i = 0 ; i<a ; i++)
        {
            ans[i] = nums[i] ;
        }
        return ans ;
    }
};