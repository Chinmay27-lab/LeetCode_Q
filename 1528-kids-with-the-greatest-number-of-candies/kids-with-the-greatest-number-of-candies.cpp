class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size() , false);
        int max1 = 0 ;
        for(int x : candies)
        {
            max1 = max(x , max1);
        }
        for(int i = 0 ; i < candies.size() ; i++)
        {
            if((candies[i]+extraCandies)>=max1) ans[i] = true ;
        }
        return ans ;
    }
};