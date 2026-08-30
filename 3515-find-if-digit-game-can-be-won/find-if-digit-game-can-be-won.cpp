class Solution {
public:
    bool single(int ans)
    {
        int ct = 0 ;
        while(ans > 0)
        {
            ct++ ;
            ans /= 10 ;
        }
        if(ct == 1) return true ;
        else return false ;
    }

    bool canAliceWin(vector<int>& nums) {
        int n = nums.size() ;
        int s = 0 ;
        int d = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            if(single(nums[i])) s += nums[i] ;
            else d += nums[i] ;
        }
        if(s == d) return false ;
        else return true ;
    }
};