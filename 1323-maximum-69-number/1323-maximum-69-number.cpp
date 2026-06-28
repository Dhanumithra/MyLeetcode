class Solution {
public:
    int maximum69Number (int num) {
        int x=num,sum=0,flag=0;
        while(x>0){
            sum=(sum*10)+(x%10);
            x/=10;
        }
        while(sum>0){
            if(sum%10==6&&flag==0){
                x=(x*10)+9;
                flag=1;
            }
            else x=(x*10)+(sum%10);
            sum/=10;
        }
        return x;
    }
};