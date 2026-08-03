class Solution {
public:
    vector<int> minOperations(string boxes) {
        int lcnt=0,rcnt=0,n=boxes.size();
        vector<int>right(n),ans(n);
        right[n-1]=rcnt;
        for(int i=n-2;i>=0;i--){
            rcnt=rcnt+boxes[i+1]-'0';
            right[i]=right[i+1]+rcnt;
        }
        int left=lcnt;
        ans[0]=right[0]+left;
        for(int i=1;i<n;i++){
            lcnt=lcnt+boxes[i-1]-'0';
            left=left+lcnt;
            ans[i]=right[i]+left;
        }
        return ans;
    }
};