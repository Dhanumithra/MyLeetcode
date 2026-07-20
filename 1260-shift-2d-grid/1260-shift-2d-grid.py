class Solution(object):
    def shiftGrid(self, grid, k):
        """
        :type grid: List[List[int]]
        :type k: int
        :rtype: List[List[int]]
        """
        m, n = len(grid), len(grid[0])
        total = m * n
        k = k % total
        
        if k == 0:
            return grid
            
        res = [[0] * n for _ in range(m)]
        
        for r in range(m):
            for c in range(n):
                new_idx = (r * n + c + k) % total
                new_r = new_idx // n
                new_c = new_idx % n
                res[new_r][new_c] = grid[r][c]
                
        return res