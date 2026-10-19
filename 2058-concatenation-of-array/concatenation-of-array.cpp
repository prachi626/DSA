class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int i;
        int n= nums.size();
        while(ans.size()<(2*n)){
            for(i=0;i<n;i++)
            {
                ans.push_back(nums[i]);
            }
            if(i==n)
             i=0;
        }
        return ans;

        
    }
};