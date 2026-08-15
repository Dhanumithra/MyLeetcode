class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string morse;
        unordered_set<string> ans;
        for(string s:words){
            morse="";
            for(char c:s){
                morse+=code[c-'a'];
            }
            ans.insert(morse);
        }
        return ans.size();
    }
};