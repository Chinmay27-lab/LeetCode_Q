class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long>ans1 ;
        for(int x : nums)
        {
            ans1.push_back(x*x) ;
        }
        sort(ans1.begin() , ans1.end()) ;
        long long ans = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(i < nums.size()/2) ans -= ans1[i] ;
            else ans += ans1[i] ;
        }
        return ans ;
    }
};