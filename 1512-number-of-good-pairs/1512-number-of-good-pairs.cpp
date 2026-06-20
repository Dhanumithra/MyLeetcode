class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt=0,i=0,j=1,n=nums.size();
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(nums[i]==nums[j])cnt++;
            }
        }
        return cnt;
    }
};