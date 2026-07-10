class Solution {
public:
    bool squareIsWhite(string coordinates) {
        bool ans;
        if ((coordinates[1]%2==1 && (coordinates[0]-'a'+1)%2==1) || (coordinates[1]%2==0 && (coordinates[0]-'a'+1)%2==0)){
            ans=false;
        }
        else ans=true;
        return ans;
    }
};