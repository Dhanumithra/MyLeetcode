class Solution {
public:
    int smallestNumber(int n, int t) {
        int x,prod,i;
        for(i=n;i<n+10;i++){
            x=i;
            prod=1;
            while(x>0){
                prod*=(x%10);
                x/=10;
                if(prod%t==0)return i;
            }
            if(prod%t==0)return i;
        }
        return i;
    }
};