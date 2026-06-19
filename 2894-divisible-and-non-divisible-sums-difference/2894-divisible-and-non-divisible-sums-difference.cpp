class Solution {
public:
    int differenceOfSums(int n, int m) {
        int t=n*(n+1)/2;
        int k=n/m;
        int n2=m*k*(k+1)/2;
        return t-2*n2;
    }
};