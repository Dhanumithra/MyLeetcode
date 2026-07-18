class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        l=0
        r=len(height)-1
        a=0
        while(l<r):
            b=r-l
            minh=height[r] if height[r]<height[l] else height[l]
            a=a if a>(minh*b) else (minh*b)
            if height[r]<height[l]:
                r-=1
            else:
                l+=1
        return a