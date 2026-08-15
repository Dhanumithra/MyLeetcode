class Solution {
public:
    int countAsterisks(string s) {
        int astcnt=0,barcnt=0;
        for(char c:s){
            if(barcnt==0&&c=='*')astcnt++;
            else if(c=='|'){
                if(barcnt==0)barcnt++;
                else barcnt--;
            }
        }
        return astcnt;
    }
};