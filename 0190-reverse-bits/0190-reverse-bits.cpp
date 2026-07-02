class Solution {
public:
    int reverseBits(int n) {
        int sum=0,x,a=0;
        while(a!=32){
            x=n%2;
            sum=sum*2+x;
            n/=2;
            a++;
        }
        return sum;
    }
};