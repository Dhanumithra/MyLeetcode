class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=-1,sum,n;
        for(int i=0;i<nums.size();i++){
            sum=0;
            n=nums[i];
            while(n>0){
                sum+=(n%10);
                n/=10;
            }
            if(sum==i){
                ans=i;
                break;
            }
        }
        return ans;
    }
};