class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int x=n%7;
        int y=n/7;
        ans=28 * y + 7 * y * (y - 1) / 2;
        ans+=x * (x + 1) / 2 + (x * y);
        return ans;
    }
};