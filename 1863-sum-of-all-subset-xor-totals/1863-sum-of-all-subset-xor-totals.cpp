class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum=0,n=nums.size(),pow=1;
        for(int i=0;i<n;i++){
            sum=sum|nums[i];
            pow=pow*2;
        }
        if(n==1||n==0)return sum;
        sum=sum*pow/2;
        return sum;
    }
};