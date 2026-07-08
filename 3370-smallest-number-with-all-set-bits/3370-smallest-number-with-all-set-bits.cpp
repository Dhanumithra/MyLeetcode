class Solution {
public:
    int smallestNumber(int n) {
        int x=n,ans=0;
        while(x>0){
            ans=ans*2+1;
            x/=2;
        }
        return ans;
    }
};