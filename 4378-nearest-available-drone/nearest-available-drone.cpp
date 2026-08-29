class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int tx = target[0] ;
        int ty = target[1] ;
        int r = drones.size() ;
        int ans = -1 ;
        int tarans = 0 ;
        int cur =  INT_MAX ;
        for(int i =0  ; i <r ;i ++)
        {
            tarans = abs(drones[i][0] - tx) + abs(drones[i][1] - ty) ;
            if(tarans <= drones[i][2] && tarans < cur)
            {
                cur = tarans ;
                ans = i ;
            }
        }
        return ans ;
    }
};