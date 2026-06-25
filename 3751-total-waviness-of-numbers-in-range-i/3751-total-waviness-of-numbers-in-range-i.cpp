class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int sum=0,wave=0;
        for(int i=num1;i<=num2;i++){
            wave=0;
            string s=to_string(i);
            for(size_t j=1;j<s.size()-1;j++){
                if((s[j]>s[j-1]&&s[j]>s[j+1])||(s[j]<s[j-1]&&s[j]<s[j+1]))wave++;
            }
            sum+=wave;
        }
        return sum;
    }
};