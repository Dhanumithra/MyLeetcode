class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,i,maxsum;
        double avgs;
        for(i=0;i<nums.size();i++){
            if(i<k){
                sum+=nums[i];
                maxsum=sum;
            }
            else{
                sum=sum+nums[i]-nums[i-k];
                maxsum=max(maxsum,sum);
            }
        }
        avgs=(double)maxsum/k;
        return avgs;
    }
};