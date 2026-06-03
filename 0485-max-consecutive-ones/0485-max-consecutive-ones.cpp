class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,cnt=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
                if(max<cnt)max=cnt;
            }
            else cnt=0;
        }
        return max;
    }
};