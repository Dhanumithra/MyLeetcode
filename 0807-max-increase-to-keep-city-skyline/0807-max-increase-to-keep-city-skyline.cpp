class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int sum=0, m=grid.size(), n=grid[0].size(), mini;
        vector<int> row(m, 0),col(n, 0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]<grid[i][j])row[i]=grid[i][j];
                if(col[i]<grid[j][i])col[i]=grid[j][i];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mini=min(col[j],row[i]);
                sum+=(mini-grid[i][j]);
            }
        }
        return sum;
    }
};