class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end()) ;
        int n = nums.size() ;
        int maxi = 1 ;
        int j = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            if(j < i) j = i ;
            while(j < n && (long long)nums[j] <= (long long)k*nums[i])
            {
                j++ ;
            }
            maxi = max(maxi , j-i) ;
        }
        return n-maxi ;
    }
};