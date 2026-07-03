class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int d,flag;
        for(int i=left;i<=right;i++){
            if(i<10)ans.push_back(i);
            else{
                d=i;
                flag=0;
                while(d>0){
                    if(d%10==0){
                        flag=1;
                        break;
                    }
                    if((i%(d%10))!=0){
                        flag=1;
                        break;
                    }
                    d/=10;
                }
                if(flag==0)ans.push_back(i);
            }
        }
        return ans;
    }
};