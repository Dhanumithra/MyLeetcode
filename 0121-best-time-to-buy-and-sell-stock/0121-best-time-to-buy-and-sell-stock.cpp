class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost, mini=prices[0], n=prices.size(), mprofit=0;
        for(int i=1;i<n;i++){
            cost=prices[i]-mini;
            mprofit=max(mprofit,cost);
            mini=min(mini,prices[i]);
        }
        return mprofit;
    }
};