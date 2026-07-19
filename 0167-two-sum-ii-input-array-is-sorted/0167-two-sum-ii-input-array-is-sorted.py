class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        ans=[]
        l=0
        r=len(numbers)-1
        while r>l:
            if numbers[l]+numbers[r]==target:
                ans.append(l+1)
                ans.append(r+1)
                break
            elif numbers[l]+numbers[r]>target: 
                r-=1
            else:
                l+=1
        return ans