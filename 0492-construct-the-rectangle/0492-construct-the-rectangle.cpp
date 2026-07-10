class Solution {
public:
    vector<int> constructRectangle(int area) {
        for(int s=sqrt(area);s>0;s--){
            if(area%s==0)return {area/s,s};
        }
        return {};
    }
};