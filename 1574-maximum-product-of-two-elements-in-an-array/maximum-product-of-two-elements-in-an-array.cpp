class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        int n = nums.size() ;
        return ((nums[n-1] - 1) * (nums[n-2] - 1)) ;
        // int max1 = 0 ;
        // int max2 = 0 ;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     if(nums[i]>=max1)
        //     {
        //         max2 = max1 ;
        //         max1= nums[i] ;
        //     }
        // }
        // return (max1 - 1)*(max2 - 1) ;
    }
};