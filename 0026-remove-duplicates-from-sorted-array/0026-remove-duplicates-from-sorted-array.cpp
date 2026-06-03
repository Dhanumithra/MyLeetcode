class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1, p2=0, n=nums.size();
        for(p1=1;p1<n;p1++){
            if(nums[p1]!=nums[p2]){
                p2++;
                nums[p2]=nums[p1];
            }
        }
        return p2+1;
    }
};