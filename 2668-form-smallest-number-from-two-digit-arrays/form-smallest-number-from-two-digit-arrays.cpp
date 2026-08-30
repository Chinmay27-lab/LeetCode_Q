class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int mini = INT_MAX ;
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            for(int j = 0 ; j < nums2.size() ; j++)
            {
                if(nums1[i] == nums2[j]) mini = min(mini , nums1[i]) ;
            }
        }
        if(mini != INT_MAX) return mini ;
        int mini1 = *min_element(nums1.begin() , nums1.end()) ;
        int mini2 = *min_element(nums2.begin() , nums2.end()) ;
        if(mini1 > mini2) return mini2*10 + mini1 ;
        else return mini1*10 + mini2 ;
    }
};