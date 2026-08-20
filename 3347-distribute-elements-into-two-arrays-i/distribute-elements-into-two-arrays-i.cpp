class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1 , arr2 ;
        int n = nums.size() ;
        arr1.push_back(nums[0]) ;
        arr2.push_back(nums[1]) ;
        for(int i = 2 ; i < n ; i ++)
        {
            if(arr1.back() > arr2.back()) 
            {
                arr1.push_back(nums[i]) ;
            }
            else 
            {
                arr2.push_back(nums[i]) ;
            }
        }
        int n1 = arr1.size() ;
        int n2 = arr2.size() ;
        vector<int>result ;
        for(int i = 0 ; i < n1 ; i++)
        {
            result.push_back(arr1[i]) ;
        }
        for(int i = 0 ; i <n2 ; i++)
        {
            result.push_back(arr2[i]) ;
        }
        return result ;
    }
};