class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0, right, zerocnt=0, maxlen=0;
        for(right=0;right<nums.size();right++){
            if(nums[right]==0)zerocnt++;
            while(zerocnt>k){
                if(nums[left]==0)zerocnt--;
                left++;
            }
            maxlen=max(maxlen, right-left+1);
        }
        return maxlen;
    }
};