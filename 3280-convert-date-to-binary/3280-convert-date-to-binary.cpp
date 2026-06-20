class Solution {
public:
    string convertDateToBinary(string date) {
        string ans="",part,bin;
        int num;
        stringstream ss(date);
        vector<string> parts;
        while(getline(ss,part,'-'))parts.push_back(part);
        for(int i=0;i<parts.size();i++){
            num=stoi(parts[i]);
            bin=bitset<32>(num).to_string();
            bin=bin.substr(bin.find('1'));
            ans+=bin;
            if(i!=parts.size()-1)ans+='-';
        }
        return ans;
    }
};