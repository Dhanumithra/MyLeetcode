class Solution {
public:
    int pivotInteger(int n) {
        int pivot,sum=(n*(n+1))/2;
        pivot=sqrt(sum);
        return pivot*pivot==sum?pivot:-1;
    }
};