class Solution {
public:
    int countCommas(int n) {
        if(n < 1000) return 0 ;
        if(n == 100000) return (100000 - 999) ;
        return n - 999 ;
    }
};