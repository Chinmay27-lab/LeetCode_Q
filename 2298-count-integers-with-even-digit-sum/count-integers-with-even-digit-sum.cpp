class Solution {
public:
    bool even(int ans)
    {
        int sum = 0 ;
        while(ans>0)
        {
            sum += ans%10 ;
            ans /= 10 ;
        }
        if(sum%2 == 0) return true ;
        else return false ;
    }
    int countEven(int num) {
        int ct = 0 ; 
        for(int i = 1 ; i <= num ; i++)
        {
            int ans = i ;
            if(even(i)) ct++ ;
        }
    return ct ;
    }
};