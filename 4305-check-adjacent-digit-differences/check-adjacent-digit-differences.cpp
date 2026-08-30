class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        bool ans = false ;
        for(int i = 0 ; i < s.size()-1 ; i++)
        {
            if(abs((s[i] - '0') - (s[i+1] - '0'))<=2) ans = true ;
            else return false ;
        }
        return ans ;
    }
};