class Solution {
public:
    int minimumDistance(vector<int>& arr) {
        int mini = INT_MAX ;
        int n = arr.size() ;

    for(int i = 0; i < n-1 ; i++)
    {
        for(int j = i+1 ; j < n-1 ; j++)
        {
            for(int k = j+1 ; k < n ; k++)
            {
                if(arr[i] == arr[j] && arr[j] == arr[k])
                {
                    int x = abs(i - j) + abs(j - k) + abs(k - i) ;
                    mini = min(mini , x) ;
                }
            }
        }
    }
    if(mini <= 0 || mini == INT_MAX) return -1 ;
    else return mini ;
    }
};