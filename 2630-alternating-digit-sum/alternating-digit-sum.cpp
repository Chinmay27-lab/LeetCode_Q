class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>ans ;
        while(n>0)
        {
            ans.push_back(n%10) ;
            n /= 10 ;
        }
        reverse(ans.begin() , ans.end()) ;
        int e = 0  ; 
        int o = 0 ;
        for(int i = 0 ; i < ans.size() ; i++)
        {
            if(i%2 == 0) e += ans[i] ;
            else o += ans[i] ;
        }
        return e - o ;
    }
};