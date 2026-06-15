class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> hash;
        int n=nums.size(),maxcnt=0,ans=-1;
        for(auto i:nums){
            if(i%2==0)hash[i]++;
        }
        for(auto& [num,cnt]:hash){
            if(cnt>maxcnt){
                maxcnt=cnt;
                ans=num;
            }
            else if(cnt==maxcnt&&num<ans)ans=num;
        }
        return ans;
    }
};