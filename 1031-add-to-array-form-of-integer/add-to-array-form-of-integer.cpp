class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size() - 1 ;
        while(i >= 0 && k>0)
        {
            int sum = num[i] + k;
            num[i] = sum%10 ;
            k = sum/10 ;
            i-- ;
        }
        while(k>0)
        {
            num.insert(num.begin() , k%10) ;
            k /= 10 ;
        }
        return num ;
    }
};



// class Solution {
// public:
//     vector<int> addToArrayForm(vector<int>& num, int k) {
//         long long sum = 0 ;
//         for(int i = 0 ; i < num.size() ; i++)
//         {
//             sum = sum*10 + num[i] ;
//         }
//         long long n = sum + k ;
//         vector<int>ans ;
//         while(n>0)
//         {
//             ans.push_back(n%10) ;
//             n /= 10 ;
//         }
//         reverse(ans.begin() , ans.end()) ;
//         return ans ;
//     }
// };