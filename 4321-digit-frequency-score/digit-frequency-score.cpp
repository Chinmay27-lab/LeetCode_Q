class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>freq(10 , 0) ;
        vector<int>ans ;
        while(n>0)
        {
            ans.push_back(n%10) ;
            n /= 10 ;
        }
        for(int x : ans)
        {
            freq[x]++ ;
        }
        int num = 0 ;
        for(int x = 0 ; x < 10 ; x++)
        {
            num += x*freq[x] ;
        }
        return num ;
    }
};