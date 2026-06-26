class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0,prev=0,cnt;
        for(string s:bank){
            cnt=0;
            for(char c:s){
                if(c=='1')cnt++;
            }
            if(cnt>0){
                ans+=(cnt*prev);
                prev=cnt;
            }
        }
        return ans;
    }
};