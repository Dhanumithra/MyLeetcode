class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int n2,n1,temp;
        n2=n*(n+1);
        n1=n2-n;
        while(n1!=0){
            temp=n1;
            n1=n2%n1;
            n2=temp;
        }
        return n2;
    }
};