class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int a,b;
        int actualsum=0;
        int n=grid.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                 actualsum += grid[i][j];
                if(s.find(grid[i][j]) != s.end())
                {
                   
                   a=grid[i][j];
                   ans.push_back(a);

                }
                s.insert(grid[i][j]);
            }
        }
        int expectedsum=0;
        expectedsum = ((n*n) *((n*n)+1)) /2;
        
       
        b = expectedsum+a-actualsum;
        ans.push_back(b);
        return ans;
    }
};