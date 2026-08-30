class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ct = 0 ;
        for(int i = low ; i <= high ; i++)
        {
            string ans = to_string(i) ;
            int ft = 0 ;
            int lt = 0 ;
            int n = ans.size() ;
            if(n%2 != 0) continue ;

            for(int i = 0 ; i<n/2; i++)
            {
                ft += ans[i] - '0' ;
            }
            for(int i = n/2 ; i<n ; i++)
            {
                lt += ans[i] - '0' ;
            }

            if(ft == lt) ct++ ;
        }
        return ct ;
    }
};