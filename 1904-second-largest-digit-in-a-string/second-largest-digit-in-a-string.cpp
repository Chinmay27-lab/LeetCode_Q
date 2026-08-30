class Solution {
public:
    int secondHighest(string s) {
        vector<int>ans ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(isdigit(s[i])) ans.push_back(s[i] - '0') ;
        }
        if(ans.size() == 0) return -1 ;
        sort(ans.begin() , ans.end()) ;
        int max1 = ans[0] ;
        int max2 = -1 ;
        for(int i = 0 ; i < ans.size() ; i++)
        {
            if(ans[i] > max1)
            {
                max2 = max1 ;
                max1 = ans[i] ;
            }
        } 
        return max2 ;
    }
};