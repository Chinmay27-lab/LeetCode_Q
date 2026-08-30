class Solution {
public:
    int getLucky(string s, int k) {
        string num = "" ;
        for(char ch : s)
        {
            num += to_string(ch - 'a' + 1) ;
        }
        int num1 = 0;
        for(char ch : num)
        {
            num1 += ch - '0' ;
        }
        k-- ;
        while(k>0)
        {
            int ans = num1 ;
            int sum = 0 ;
            while(ans>0)
            {
                sum += ans%10 ;
                ans/=10; 
            }
            num1 = sum ;
            k-- ;
        }
        return num1 ;
    }
};