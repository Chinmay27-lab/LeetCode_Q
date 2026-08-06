class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true)
        {
            int ans = n ;
            int mul = 1 ;
            
            while(ans > 0)
            {
                mul *= ans%10 ;
                ans /= 10 ;
            }

            if(mul%t == 0) return n;
            n++ ;
        }
    }
};