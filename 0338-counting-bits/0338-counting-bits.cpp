class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        int cnt=0,num;
        for(int i=0;i<n+1;i++){
            num=i;
            cnt=0;
            while(num>0){
                if(num%2==1)cnt++;
                num/=2;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};