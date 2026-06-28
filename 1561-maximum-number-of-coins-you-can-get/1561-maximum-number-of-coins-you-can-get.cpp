class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int sum=0,left=0,right=piles.size()-1;
        sort(piles.begin(),piles.end());
        while(left<right){
            sum+=piles[right-1];
            left++;
            right-=2;
        }
        return sum;
    }
};