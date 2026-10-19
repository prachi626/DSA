class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int  j=1;
        vector<int>arr;
        int n = nums.size();
        while(j<=n)
        {   int s=0;
            for(int i=0;i<j;i++)
            {
                s=s+nums[i];
                //arr.push_back(s);
            }
            arr.push_back(s);
            j++;
        }
        return arr;

        
    }
};