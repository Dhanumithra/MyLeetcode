class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char>ans;
        for(char c:s){
            ans.insert(c);
        }
        return ans.size();
    }
};