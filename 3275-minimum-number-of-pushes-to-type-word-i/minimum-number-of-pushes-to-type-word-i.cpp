class Solution {
public:
    int minimumPushes(string word) {
        int ct = 0 ;
        for(int i = 0 ; i < word.size() ; i++)
        {
            ct += (i/8) + 1 ;
        }
        return ct ;
    }
};