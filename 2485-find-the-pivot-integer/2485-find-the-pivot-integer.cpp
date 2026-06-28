class Solution {
public:
    int pivotInteger(int n) {
        int n1,n2;
        for(int i=n;i>0;i--){
            n1=(n*(n+1))/2;
            n1+=i;
            if(n1%2==1)continue;
            n1=n1/2;
            n2=((i+1)*i)/2;
            if(n1==n2)return i;
        }
        return -1;
    }
};