class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0,sum=0,num=n;
        int f=0,rem;
        while(num>0){
            rem=num%10;
            num/=10;
            if(rem==0){
                f++;
                continue;
            }
            x=(x*10)+rem;
            sum+=rem;
        }
        num=x;
        x=0;
        while(num>0){
            x=(x*10)+(num%10);
            num/=10;
        }
        return x*sum;
    }
};