class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& nums) {
        int n = nums.size() ;
        int m = nums[0].size();
        
        for(int i =0 ; i < n ; i++)
        {
            int empty = m-1 ;
            for(int j = m-1 ; j>=0 ; j--)
            {
                if(nums[i][j] == '*')
                {
                    empty = j-1 ;
                }
                else if(nums[i][j] == '#')
                {
                    nums[i][j] = '.' ;
                    nums[i][empty] = '#' ;
                    empty -- ;
                }
            }
        }

        vector<vector<char>>ans(m , vector<char>(n));
        
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                ans[j][n-i-1] = nums[i][j] ;
            }
        }
        return ans ;
    }
};



// class Solution {
// public:
//     vector<vector<char>> rotateTheBox(vector<vector<char>>& nums) {

//         int n = nums.size();       // rows
//         int m = nums[0].size();    // columns

//         // Gravity towards right
//         for(int i = 0; i < n; i++)
//         {
//             int empty = m - 1;

//             for(int j = m - 1; j >= 0; j--)
//             {
//                 if(nums[i][j] == '*')
//                 {
//                     empty = j - 1;
//                 }
//                 else if(nums[i][j] == '#')
//                 {
//                     nums[i][j] = '.';
//                     nums[i][empty] = '#';
//                     empty--;
//                 }
//             }
//         }

//         // Rotate 90 degree clockwise
//         vector<vector<char>> ans(m, vector<char>(n));

//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 ans[j][n - i - 1] = nums[i][j];
//             }
//         }

//         return ans;
//     }
// };