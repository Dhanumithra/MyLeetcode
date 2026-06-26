class Solution {
public:
    int countDigits(int num) {
        int x=num,cnt=0,rem;
        while(x>0){
            rem=x%10;
            if(num%rem==0)cnt++;
            x=x/10;
        }
        return cnt;
    }
};