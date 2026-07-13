class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<bool> oddRows(m, false);
        vector<bool> oddCols(n, false);
        
        for (const auto& index : indices) {
            oddRows[index[0]] = !oddRows[index[0]];
            oddCols[index[1]] = !oddCols[index[1]];
        }
        
        int r_odd = 0;
        for (bool r : oddRows) {
            if (r) r_odd++;
        }
        
        int c_odd = 0;
        for (bool c : oddCols) {
            if (c) c_odd++;
        }
        
        return (r_odd * (n - c_odd)) + (c_odd * (m - r_odd));
    }
};