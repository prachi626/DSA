class Solution {
  public:
    
    bool isPalindrome(string &s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end])
                return false;
            
            start++;
            end--;
        }
        
        return true;
    }

    void solve(int index, string &s,
               vector<string> &temp,
               vector<vector<string>> &ans) {
        
        // Base case
        if (index == s.size()) {
            ans.push_back(temp);
            return;
        }

        // Try every possible substring
        for (int i = index; i < s.size(); i++) {
            
            // Only choose palindrome substring
            if (isPalindrome(s, index, i)) {
                
                // Choose
                temp.push_back(s.substr(index, i - index + 1));
                
                // Explore
                solve(i + 1, s, temp, ans);
                
                // Backtrack
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;

        solve(0, s, temp, ans);

        return ans;
    }
};