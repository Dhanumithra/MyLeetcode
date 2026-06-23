class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> mpp;
        for(auto i:text){
            mpp[i]++;
        }
        int mini=mpp['a'];
        mini=min(mini,mpp['b']);
        mpp['l']/=2;
        mini=min(mini,mpp['l']);
        mpp['o']/=2;
        mini=min(mini,mpp['o']);
        mini=min(mini,mpp['n']); 
        return mini;  
        }     
    };