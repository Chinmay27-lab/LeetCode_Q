class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int freq[10] = {0} ;
        while(n>0)
        {
            freq[n%10]++ ;
            n /= 10 ;
        }
        int mini = INT_MAX ;
        int ans = 0 ;

        for(int i = 0 ; i < 10 ; i++)
        {
            if(freq[i] > 0 && freq[i]<mini)
            {
                mini = freq[i] ;
                ans = i ;
            }
        }
        return ans ;
    }
};