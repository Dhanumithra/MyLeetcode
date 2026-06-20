class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xz,yz;
        xz=abs(x-z);
        yz=abs(y-z);
        if(xz==yz)return 0;
        if(xz>yz)return 2;
        return 1;        
    }
};