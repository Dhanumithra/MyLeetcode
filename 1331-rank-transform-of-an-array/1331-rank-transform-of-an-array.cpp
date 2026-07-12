class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int r=1;
        unordered_map<int, int> rank;
        set<int> nums(arr.begin(),arr.end());
        for(auto n:nums){
            rank[n]=r++;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=rank[arr[i]];
        }
        return arr;
    }
};