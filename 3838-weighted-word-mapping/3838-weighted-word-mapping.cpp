class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        char c;
        int sum;
        string ans;
        for(auto i:words){
            sum=0;
            c='z';
            for(int j=0;j<i.size();j++){
                sum+=weights[i[j]-'a'];
            }
            sum=sum%26;
            c=c-sum;
            ans=ans+c;
        }
        return ans;
    }
};