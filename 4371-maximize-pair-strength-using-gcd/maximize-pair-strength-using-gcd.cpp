class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size() ;
        long long ans = INT_MIN ;
        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = i+1 ; j < n  ;j++)
            {
                int a = nums[i]  ;
                int b = nums[j] ;
                long long g = gcd(a , b) ;
                long long str = (1LL * a/g)*(b/g) ;
                ans = max(str , ans) ;
            }
        }
        return ans ;
    }
};