class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int ele=0,found=0,n=s.length();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(s[i]==c){
                ele=i;
                found=1;
            }
            if(found==0)continue;
            else{
                ans[i]=abs(i-ele);
            }
        }
        found=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==c){
                ele=i;
                found=1;
            }
            if(found==0)continue;
            else{
                if(ans[i]==0)ans[i]=n;
                ans[i]=min(abs(i-ele),ans[i]);
            }
        }
        return ans;
    }
};