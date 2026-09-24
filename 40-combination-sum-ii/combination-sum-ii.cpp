class Solution {
public:

    void solve(vector<int>& candidates, int target,
               vector<vector<int>>& answer,
               vector<int>& temp, int i)
    {
        // Target 0 ho gaya -> ek valid combination mil gaya
        if (target == 0)
        {
            answer.push_back(temp);
            return;
        }

        // Array khatam ho gaya
        // Ya target negative ho gaya
        if (i >= candidates.size() || target < 0)
        {
            return;
        }

        // Current element ko include karenge
        if (candidates[i] <= target)
        {
            temp.push_back(candidates[i]);

            // i+1 because Combination Sum II mein
            // ek element ko sirf ek baar use kar sakte hain
            solve(candidates, target - candidates[i],
                  answer, temp, i + 1);

            // Backtracking
            temp.pop_back();
        }

        // Current element ko skip karenge
        // Same level par duplicate ko skip karna hai
        while (i + 1 < candidates.size() &&
               candidates[i] == candidates[i + 1])
        {
            i++;
        }

        // Current element nahi liya
        solve(candidates, target,
              answer, temp, i + 1);
    }


    vector<vector<int>> combinationSum2(vector<int>& candidates,
                                         int target)
    {
        // Duplicates ko easily identify karne ke liye sort
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> answer;
        vector<int> temp;

        solve(candidates, target, answer, temp, 0);

        return answer;
    }
};