class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        char c;
        int sum;
        map<char,int> mpp;
        string ans;
        for(int i=0;i<26;i++){
            mpp[97+i]=weights[i];
        }
        for(auto i:words){
            sum=0;
            c='z';
            for(int j=0;j<i.size();j++){
                sum+=mpp[i[j]];
            }
            sum=sum%26;
            c=c-sum;
            ans=ans+c;
        }
        return ans;
    }
};