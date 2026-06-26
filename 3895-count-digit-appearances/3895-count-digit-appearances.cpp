class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt=0,rem;
        for(auto n:nums){
            while(n>0){
                rem=n%10;
                if(rem==digit)cnt++;
                n/=10;
            }
        }
        return cnt;
    }
};