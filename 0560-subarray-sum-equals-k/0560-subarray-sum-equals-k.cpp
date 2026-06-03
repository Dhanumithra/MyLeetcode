class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0, cnt=0, n=nums.size();
        map<int,int> HM;
        HM[0]=1;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            cnt+=HM[sum-k];
            HM[sum]++;
        }
        return cnt;
    }
};