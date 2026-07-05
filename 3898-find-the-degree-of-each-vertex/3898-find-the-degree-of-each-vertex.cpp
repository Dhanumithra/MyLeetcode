class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int flag;
        for(auto mat:matrix){
            flag=0;
            for(auto n:mat){
                if(n==1)flag++;
            }
            ans.push_back(flag);
        }
        return ans;
    }
};