class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true ;
        else if(n<=0) return false; 
        else if(n%4 == 0)
        {
            while(n%4 == 0)
            {
                n /= 4 ;
            }
            return n==1 ;
        }
        return false ;
    }
};