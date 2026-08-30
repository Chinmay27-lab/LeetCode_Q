class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        int n = nums.size() ;
        while(n>1)
        {
            sort(nums.begin() , nums.end()) ;
            int last = nums[n-1] ;
            int second_last = nums[n-2] ;
            nums.pop_back() ;
            nums.pop_back() ;
            if(last!=second_last)  nums.push_back(last - second_last) ;
            n = nums.size() ;
        }
        if(n==0) return  0 ;
        else return nums[0] ;
    }
};