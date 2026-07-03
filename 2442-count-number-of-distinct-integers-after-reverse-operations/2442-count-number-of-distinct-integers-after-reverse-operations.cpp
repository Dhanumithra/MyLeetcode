class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int rev,n=nums.size(),num;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            rev=0;
            num=nums[i];
            while(num>0){
                rev=rev*10+(num%10);
                num=num/10;
            }
            st.insert(rev);
        }
        return st.size();
    }
};