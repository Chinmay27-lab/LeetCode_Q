// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n= nums.size(); 
//         if(((nums[0]<0) && (nums[1])<0))  && ((abs(nums[0]) * abs(nums[1]))> nums[n-1]))
//         {
//             return (nums[0] * nums[1] * nums[n-1]) ;
//         }
//         else 
//         {
//             return (nums[n-1]*nums[n-2]*nums[n-3]);
//         }
//     }
// };




class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        return max(nums[0] * nums[1] * nums[n-1],
                   nums[n-1] * nums[n-2] * nums[n-3]);
    }
};