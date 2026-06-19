class Solution {
public:
    int rev(int n){
        int num=0;
        while(n>0){
            num=(num*10)+(n%10);
            n/=10;
        }
        return num;
    }
    int mirrorDistance(int n) {
        int num=rev(n);
        n=abs(n-num);
        return n;
    }
};