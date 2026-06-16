class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        char s;
        int sum;
        string ans;
        ans.reserve(words.size());
        for(auto i:words){
            sum=0;
            for(auto c:i){
                sum+=weights[c-'a'];
            }
            s='z'- (sum%26);
            ans.push_back(s);
        }
        return ans;
    }
};