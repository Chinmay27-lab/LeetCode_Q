class Solution {
public:
    long long smallestNumber(long long num) {
        if(num>0)
        {
            string s = to_string(num) ;

            sort(s.begin() , s.end());

            if(s[0]  == '0')
            {
                int i = 0 ;
                while(s[i] == '0')
                {
                    i++ ;
                }
                swap(s[i] , s[0]) ;
            }
            return stoll(s) ;
        }
        else if(num<0)
        {
            string s = to_string(-num) ;
            sort(s.begin() , s.end() , greater<char>()) ;
            return -stoll(s);
        }
        return 0 ;
    }
};