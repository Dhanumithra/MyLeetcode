class Solution {
public:
    char kthCharacter(int k) {
        int cnt=0;
        k=k-1;
        while(k>0){
            if(k%2==1)cnt++;
            k/=2;
        }
        return char('a'+cnt);
    }
};