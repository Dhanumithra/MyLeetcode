class Solution {
public:
    string reversePrefix(string s, int k) {
        int l=0,r=k-1;
        char c;
        while(l<r){
            c=s[l];
            s[l]=s[r];
            s[r]=c;
            l++;
            r--;
        }
        return s;
    }
};