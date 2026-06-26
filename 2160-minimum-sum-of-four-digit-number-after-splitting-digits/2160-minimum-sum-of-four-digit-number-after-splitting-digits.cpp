class Solution {
public:
    int minimumSum(int num) {
        int x,y;
        vector<int> n;
        for(int i=0;i<4;i++){
            n.push_back(num%10);
            num/=10;
        }
        sort(n.begin(),n.end());
        x=n[0]*10+n[3];
        y=n[1]*10+n[2];
        return x+y;        
    }
};