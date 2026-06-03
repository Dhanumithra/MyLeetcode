class Solution {
public:
    void reverse(vector<int>& nums, int i, int j){
        int temp;
        while(i<=j){
            temp = nums[i];
            nums[i]= nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};