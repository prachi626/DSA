class Solution {
  public:
    void solve(int open, int close, int n,
               string &temp, vector<string> &ans) {
        
        // Base case
        if (temp.size() == 2 * n) {
            ans.push_back(temp);
            return;
        }

        // Add '('
        if (open < n) {
            temp.push_back('(');
            solve(open + 1, close, n, temp, ans);
            temp.pop_back();  // backtrack
        }

        // Add ')'
        if (close < open) {
            temp.push_back(')');
            solve(open, close + 1, n, temp, ans);
            temp.pop_back();  // backtrack
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp = "";

        solve(0, 0, n, temp, ans);

        return ans;
    }
};