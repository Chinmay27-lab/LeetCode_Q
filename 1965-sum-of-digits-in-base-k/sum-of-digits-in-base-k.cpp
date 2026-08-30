class Solution {
public:
    int sumBase(int n, int k) {
        vector<int>ans ;
        while(n>0)
        {
            ans.push_back(n%k) ;
            n /= k ;
        }
        int num = 0 ;
        for(int x : ans)
        {
            num += x ;
        }
        return num ;
    }
};