class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int sum=0,left=0,right=n-1;
        sort(piles.begin(),piles.end());
        while(left<right){
            sum+=piles[right-1];
            left++;
            right-=2;
        }
        return sum;
    }
};