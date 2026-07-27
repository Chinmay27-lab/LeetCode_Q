class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxrange = -1;
        int sum = 0;
        for(int num : nums)
        {
            int i = num ;
            int st = INT_MAX , lt = INT_MIN ;
            while(i)
            {
                int digit = i%10 ;
                st = min(st,digit);
                lt = max(lt,digit);
                i /= 10 ;
            }
            int range = lt - st ;
            if(range>maxrange)
            {
                maxrange = range ;
                sum = num ;
            } 
            else if(range == maxrange)
            {
                sum += num ;
            }
        }
        return sum ;
    }
};