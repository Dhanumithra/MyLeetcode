class Solution:
    def trap(self, height: List[int]) -> int:
        left=0
        right=len(height)-1
        lmax=height[0]
        rmax=height[right]
        water=0
        while left<right:
            if lmax<rmax:
                left+=1
                lmax=lmax if lmax>height[left] else height[left]
                water+=lmax-height[left]
            else:
                right-=1
                rmax=rmax if rmax>height[right] else height[right]
                water+=rmax-height[right]
        return water     