class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size() ;
        int ct = 0 ;

        for(int i = 0 ; i < k ; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
            ct ++ ;
        }

        int ans = ct ;
        for(int i = k ; i < n ; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
            ct ++ ;
            
            if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u')
            ct --;

            ans = max(ans, ct);
        }
        return ans ;
    }
};