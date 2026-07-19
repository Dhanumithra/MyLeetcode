class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        ans=[]
        nums.sort()
        for i in range(len(nums)-2):
            if i>0 and nums[i]==nums[i-1]:
                continue
            j=i+1
            k=len(nums)-1
            while j<k:
                sums=nums[i]+nums[j]+nums[k]
                if 0==sums:
                    ans.append([nums[i],nums[j],nums[k]])
                    j+=1
                    k-=1
                    while nums[j]==nums[j-1] and j<k:
                        j+=1
                    while nums[k]==nums[k+1] and j<k:
                        k-=1
                elif sums<0:
                    j+=1
                else:
                    k-=1
        return ans