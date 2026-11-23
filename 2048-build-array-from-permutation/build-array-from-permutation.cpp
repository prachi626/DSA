class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>arr;
        vector<int>s=nums;
        for(int i=0;i<nums.size();i++)
        {
             int t=s[i];
            arr.push_back(nums[t]);
            
            

        }
        return arr;

        
    }
};