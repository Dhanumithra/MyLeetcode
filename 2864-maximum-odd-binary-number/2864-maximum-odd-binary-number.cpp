class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt=0,n=s.size();
        for(auto c:s){
            if(c=='1')cnt++;
        }
        int x=n-cnt;
        string ans=string(cnt-1,'1')+string(x,'0')+"1";  
        return ans;      
    }
};