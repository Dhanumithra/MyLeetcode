class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        char s;
        int sum;
        string ans;
        for(auto i:words){
            sum=0;
            for(auto c:i){
                sum+=weights[c-'a'];
            }
            s='z'- (sum%26);
            ans=ans+s;
        }
        return ans;
    }
};