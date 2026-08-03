class Solution {
public:
    int maxFreqSum(string s) {
        int f[26],mv=0,mc=0,i;
        for(char c:s){
            i=c-'a';
            f[i]++;
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')mv=max(mv,f[i]);
            else mc=max(mc,f[i]);
        }
        return mc+mv;
    }
};