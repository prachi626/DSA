class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr;
        int i=0,temp;
        while(i<heights.size())
        {
            arr.push_back(heights[i]);
            i++;
        }
        sort(heights.begin(),heights.end());
        int j=0;
        int c=0;
        while(j<heights.size())
        {
         if(arr[j]!=heights[j])
         {
            c++;
            
         }
         j++;
        }
        return c;
        
    }
};