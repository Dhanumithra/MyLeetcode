class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> uni;
        int n=nums.size(), left=0, right;
        long long sum=0, maxsum=0;
        for(right=0;right<n;right++){
            if(uni.find(nums[right])==uni.end()){
                sum+=nums[right];
                uni.insert(nums[right]);
                if(right-left+1==k){
                    maxsum=max(maxsum,sum);
                    sum-=nums[left];
                    uni.erase(nums[left]);
                    left++;
                }
            }
            else{
                while(nums[left]!=nums[right]){
                    sum-=nums[left];
                    uni.erase(nums[left]);
                    left++;
                }
                left++;
            }
        }
        return maxsum;
    }
};