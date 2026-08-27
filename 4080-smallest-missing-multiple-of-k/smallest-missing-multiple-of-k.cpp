class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end()) ;
        int n = nums.size() ;
        int j =1 ;
        for(int i = 0 ;i < n ;i++)
        {
            if(nums[i] == k*j)
            {
                j++ ; 
            }
        }
        return k*j ;
    }
};