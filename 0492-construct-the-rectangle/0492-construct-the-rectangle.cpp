class Solution {
public:
    vector<int> constructRectangle(int area) {
        double dl,db;
        int b,l,B,L;
        int diff = INT_MAX;
        for(l=1;l<=area;l++){
            dl=l;
            db=area/dl;
            b=area/l;
            if(db==b && diff>abs(l-b)){
                diff=abs(l-b);
                L=l;
                B=b;
            }
        }
        if(B>L){
            swap(L,B);
        }
        return {L,B};
    }
};