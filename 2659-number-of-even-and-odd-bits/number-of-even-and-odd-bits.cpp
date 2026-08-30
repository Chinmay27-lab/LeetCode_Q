class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>ans ;
        int e = 0 , idx = 0 , o = 0 ;
        while(n>0)
        {
            if(n%2 == 1)
            {
                if(idx%2 == 0) e++ ;
                else o++ ;
            }

            n/=2 ;
            idx++ ;
        }
        ans.push_back(e) ;
        ans.push_back(o) ;
        return ans ;
    }
};