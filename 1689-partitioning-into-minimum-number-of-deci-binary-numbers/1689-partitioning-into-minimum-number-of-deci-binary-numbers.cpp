class Solution {
public:
    int minPartitions(string n) {
        int max=0,s=n.size();
        for(int i=0;i<s;i++){
            if(max<n[i]-'0')max=n[i]-'0';
        }
        return max;
    }
};