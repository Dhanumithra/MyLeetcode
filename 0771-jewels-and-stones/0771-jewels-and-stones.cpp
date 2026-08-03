class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0;
        for(char j:jewels){
            cnt+=count(stones.begin(),stones.end(),j);
        }
        return cnt;
    }
};