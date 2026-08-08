class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,result=0;
        for(int i=0;i<s.length();i++){
            count+=(s[i]=='L'?1:-1);
            if(count==0)result++;
        }
        return result;
    }
};