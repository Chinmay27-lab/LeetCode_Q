class Solution {
public:
    int maximum69Number (int num) {
        vector<int> ans ;
        while(num!=0)
        {
            ans.push_back(num%10) ;
            num /= 10 ;
        }
        for(int i = ans.size()-1; i >= 0 ; i--)
        {
            if(ans[i] == 6) 
            {
                ans[i] = 9 ;
                break ;
            }
        }
        int sum = 0 ;
        for(int i = ans.size()-1; i >= 0 ; i--)
        {
            int lt = ans[i] ;
            sum  = sum*10 + lt ;
        }
        return sum ;
    }
};