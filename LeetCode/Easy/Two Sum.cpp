class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        
        
        unordered_map<int,int> mp;

        for(int i=0; i<nums.size(); i++)
        {
            int b = k - nums[i]; 

            if( mp.find(b) != mp.end() )
            {
                return {mp[b],i};
            }
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};