class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        ans=[]
        i=0
        while i<len(nums):
            st=nums[i]
            while i+1<len(nums) and nums[i+1]==nums[i]+1:
                i+=1
            if st==nums[i]:
                ans.append(str(nums[i]))
            else:
                ans.append(f"{st}->{nums[i]}")
            i+=1
        return ans