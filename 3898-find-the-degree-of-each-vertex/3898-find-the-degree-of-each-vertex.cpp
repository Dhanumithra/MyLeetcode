class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int flag;
        for(int i=0;i<matrix.size();i++){
            flag=0;
            for(auto n:matrix[i]){
                if(n==1)flag++;
            }
            ans.push_back(flag);
        }
        return ans;
    }
};