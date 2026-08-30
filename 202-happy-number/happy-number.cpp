class Solution {
public:
    bool isHappy(int n) {
        set<int>s ;
        int real = n ;
        while(n!=1)
        {
            if(s.count(n)) return false ;
            s.insert(n) ;
            int ans = n;
            int sum = 0 ;
            while(ans>0)
            {
                int lt = ans%10 ;
                sum += lt*lt ;
                ans /= 10 ;
            }
            n = sum ;
        }
        if(n == 1) return true ;
        else return false ;
    }
};