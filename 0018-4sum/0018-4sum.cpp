class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int i,j,k,l,n;
        n=nums.size();
        long long sum;
        if(n<4)return ans;
        for(i=0;i<n-3;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            for(j=i+1;j<n-2;j++){
                if(j>i+1&&nums[j]==nums[j-1])continue;
                k=j+1;
                l=n-1;
                while(k<l){
                    sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        l--;
                        k++;
                        while(k<l&&nums[k]==nums[k-1])k++;
                        while(k<l&&nums[l]==nums[l+1])l--;
                    }
                    else if(sum>target){
                        l--;
                    }
                    else{
                        k++;
                    }
                }
            }
        }
        return ans;
    }
};