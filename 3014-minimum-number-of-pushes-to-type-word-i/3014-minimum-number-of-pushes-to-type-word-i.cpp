class Solution {
public:
    int minimumPushes(string word) {
        int x=word.length();
        int ans=x;
        if(x>8) ans+=x-8;
        if(x>16) ans+=x-16;
        if(x>24) ans+=x-24;
        return ans;
    }
};