class Solution(object):
    def sumZero(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        ans = []
        for i in range ((n/2)+1):
            if n==1:
                ans.append(0)
                break
            if i==0 and n%2==1:
                ans.append(0)
            elif i==0:
                continue
            else:
                ans.append(-i)
                ans.append(i)
        return ans