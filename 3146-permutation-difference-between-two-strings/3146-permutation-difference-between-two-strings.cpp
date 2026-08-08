class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int d=0,j;
        for(int i=0;i<s.length();i++){
            j=t.find(s[i]);
            d+=abs(i-j);
        }
        return d;
    }
};