class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 ;
        int prod = 1 ;
        int original = n ;
        while(n>0)
        {
            sum += n%10 ;
            prod *=n%10 ;
            n /= 10 ;
        }
        int n1 = sum + prod ;
        if(original%n1 == 0) return true ;
        return false; 
    }
};