class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        int cnt=0,num;
        for(int i=0;i<n+1;i++){
            num=i;
            cnt=0;
            while(num>0){
                if(num%2==1)cnt++;
                num/=2;
            }
            ans[i]=cnt;
        }
        return ans;
    }
};