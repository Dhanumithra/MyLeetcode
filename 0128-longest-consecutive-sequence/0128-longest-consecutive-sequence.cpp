class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int n=nums.size(),cnt,x;
        if(n==0)return 0;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int longest=1;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                cnt=1;
                x=it;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x++;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
};