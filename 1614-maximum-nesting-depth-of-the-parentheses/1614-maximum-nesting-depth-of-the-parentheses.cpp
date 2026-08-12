class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,ans=0;
        stack<char> r;
        for(char c:s){
            if(c=='(')ans++;
            else if(c==')')ans--;
            cnt=max(cnt,ans);
        }
        return cnt;
    }
};