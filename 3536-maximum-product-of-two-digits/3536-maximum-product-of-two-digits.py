class Solution:
    def maxProduct(self, n: int) -> int:
        max1=0
        max2=0
        while n>0:
            rem=n%10
            n=n//10
            if rem>max1:
                max2=max1
                max1=rem
            elif rem>max2:
                max2=rem
        prod=max1*max2
        return prod