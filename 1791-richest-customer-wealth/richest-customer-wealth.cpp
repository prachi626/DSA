class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>arr;
        int m,n;
        int s=0;
        m=accounts.size();
        for(int i=0;i<m;i++)
        {
             n=accounts[i].size();
            for(int j=0;j<n;j++)
             s=s+accounts[i][j];

        
        arr.push_back(s);
        s=0;
        }
        int max= *max_element(arr.begin(),arr.end());
        return max;

       
    }   
    
};