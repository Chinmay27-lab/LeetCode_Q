class Solution {
public:
    bool validDigit(int n, int x) {
        if(n == x)return false ;
        if(n == 0 && x==1) return false ;
        vector<int>freq(10 , 0);
        vector<int>ans ;
        while(n > 0)
        {
            ans.push_back(n%10) ;
            n /= 10 ;
        } 
        reverse(ans.begin() , ans.end()) ;
        for(int a : ans)
        {
            freq[a]++ ;
        }
        if(ans[0] == x) return false ;
        if(freq[x]>0) return true ;
        return false ;
    }
};