class Solution {
public:
    int elevatorRequests(int n, vector<int>& arr) {
        int r = arr.size() ;
        int num = arr[0] ;
        int ans = arr[0] ;
        for(int i = 1 ; i < r ; i ++)
        {
            int t = abs(num - arr[i]) ;
            ans += t ;
            num = arr[i] ;
        }
        return ans ;
    }
};