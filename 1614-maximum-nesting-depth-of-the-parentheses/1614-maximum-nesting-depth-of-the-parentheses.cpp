class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        stack<char> r;
        for(char c:s){
            if(c=='(')r.push(c);
            else if(c==')')r.pop();
            cnt=max(cnt, (int)r.size());
        }
        return cnt;
    }
};