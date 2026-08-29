class Solution {
public:
        bool isPrime(int n)
        {
            if(n<2) return false ;

            for(int i = 2 ; i < n ;i++)
            {
                if(n%i == 0) return false ;
            }
            return true ;
        }

    int maximumPrimeDifference(vector<int>& nums) {
        int ft = -1 ;
        int lt = -1 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(isPrime(nums[i]))
            {
                if(ft == -1) ft = i ;

                lt = i ;
            }
        }
        return abs(ft - lt) ;
    }
};