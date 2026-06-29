class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size(),n1=-1,n2=-1,x;
        vector<int> fre((n*n)+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                x=grid[i][j];
                fre[x]++;
            }
        }
        for(int i=0;i<=(n*n);i++){
            if(fre[i]==0)n2=i;
            if(fre[i]==2)n1=i;
        }
        return {n1,n2};
    }
};