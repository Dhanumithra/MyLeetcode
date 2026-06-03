class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j=-1,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==0){
                j=i; 
                break;
            }
        }
        for(i=j+1;i<n;i++){
            if(nums[i]!=0&&j!=-1){
                nums[j]=nums[i];
                nums[i]=0;
                j++;
            }
        }
    }
};