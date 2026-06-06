class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int i,j,k,n,sum;
        n=nums.size();
        for(i=0;i<n-2;i++){
            j=i+1;
            k=n-1;
            if(nums[i] + nums[j] + nums[j+1] > 0)break;
            if(i>0 && nums[i]==nums[i-1])continue;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum>0)k--;
                else if(sum<0)j++;
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k]==nums[k+1])k--;
                }
            }
        }
        return ans;
    }
};