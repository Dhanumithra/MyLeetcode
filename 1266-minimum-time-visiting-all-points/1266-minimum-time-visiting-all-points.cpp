class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int cnt=0,n=points.size(),n1,n2;
        for(int i=1;i<n;i++){
            n1=abs(points[i][0]-points[i-1][0]);
            n2=abs(points[i][1]-points[i-1][1]);
            cnt+=max(n1,n2);
        }
        return cnt;
    }
};