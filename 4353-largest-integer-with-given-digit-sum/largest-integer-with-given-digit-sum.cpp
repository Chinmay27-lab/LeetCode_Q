class Solution {
public:
    int largestInteger(int n, int s) {
        if(s > 9*n) return -1 ;
        if(n == 0) return 0 ;
        int ans = 0 ;
        while(n>0)
        {
            for(int i = 9 ; i >=0 ;i--)
            {
                if(s>=i)
                {
                    ans = ans*10 + i ;
                    s -= i ;
                    break ;
                }
            }
            n-- ;
        }
        return ans ;
    }
};