class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        for(int row=n-1;row>0;row--){
            for(int i=0;i<row;i++){
                nums[i]=(nums[i]+nums[i+1])%10;
            }
        }
        return nums[0];
    }
};