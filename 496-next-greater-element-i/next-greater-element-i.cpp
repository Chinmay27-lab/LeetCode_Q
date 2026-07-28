class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans ;
        for(int i =0 ; i < nums1.size() ; i++)
        {
            int max = -1;
            for(int j = 0; j < nums2.size() ; j++)
            {
                if(nums1[i] == nums2[j])
                {
                    while(j != nums2.size())
                    {
                        if(nums2[j] > nums1[i])
                        {
                            max = nums2[j] ;
                            break ;
                        }
                        j++ ;
                    }
                }
            }
            ans.push_back(max) ;
        }
        return ans ;
    }
};



/*
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> s;
        unordered_map<int,int> mp;

        for(int i = nums2.size() - 1; i >= 0; i--)
        {
            while(!s.empty() && nums2[i] >= s.top())
            {
                s.pop();
            }

            if(s.empty())
            {
                mp[nums2[i]] = -1;
            }
            else
            {
                mp[nums2[i]] = s.top();
            }

            s.push(nums2[i]);
        }

        vector<int> ans;

        for(int x : nums1)
        {
            ans.push_back(mp[x]);
        }

        return ans;
    }
};
*/ 