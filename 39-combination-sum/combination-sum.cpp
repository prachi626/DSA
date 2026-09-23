class Solution {
public:
   void solve(vector<int>&candidates, int target,vector<vector<int>> &ans, vector<int>&temp,int i)
   {
     if(target==0)
     {
        ans.push_back(temp);
        return;
     }
     if(i== candidates.size())
     return;
     //recursive case
     if(candidates[i]<= target)
     {
        temp.push_back(candidates[i]);
        solve(candidates,target-candidates[i],ans,temp,i);
        temp.pop_back();// backtracking
     }
     //if current element is greater than target
     solve(candidates, target, ans, temp, i+1);

   }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(candidates,target,ans,temp,0);
        return ans;

        
    }
};