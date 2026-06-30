class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=nums[0],sum=nums[0];
        int cnt=0,n=nums.size();
        for(int i=1;i<n;i++){
            sum+=nums[i];
            if(maxi<nums[i])maxi=nums[i];
        }
        cnt=(n*maxi)-sum;
        return cnt;
    }
};