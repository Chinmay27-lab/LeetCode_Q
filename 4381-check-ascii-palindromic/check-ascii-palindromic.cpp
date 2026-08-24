class Solution {
public:
    bool isPalindromic(string s) {
        string b = "" ;
        for(char c : s)
        {
            b += bitset<8>(c).to_string() ;
        }
        for(int i = 0 , j = b.size()-1 ; i<=j ; i++ , j--)
        {
            if(b[i]!=b[j]) return false; 
        }
        return true ;
    }
};