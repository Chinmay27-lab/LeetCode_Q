class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size() ;
        if(nums.size() == k) return *max_element(nums.begin() , nums.end()) ;
        if(k==1)
        {
            int ans = -1 ;
            for(int i = 0 ; i < nums.size() ; i++)
            {
                if(count(nums.begin() , nums.end() , nums[i]) == 1)
                {
                    ans = max(ans , nums[i]);
                }
            }
            return ans ;
        }
        int ct1 = count(nums.begin() , nums.end() , nums[0]) ;
        int ct2 = count(nums.begin() , nums.end() , nums[n-1]) ;
        if(ct1 == 1 && ct2 == 1)
        {
            if(ct1 == 1 && (nums[0] > nums[n-1])) return nums[0] ;
            else if(ct2 == 1 && (nums[0] < nums[n-1])) return nums[n-1] ;
        }
        if(ct1 == 1) return nums[0] ;
        else if(ct2 == 1) return nums[n-1] ;
        else return -1 ;
    }
};