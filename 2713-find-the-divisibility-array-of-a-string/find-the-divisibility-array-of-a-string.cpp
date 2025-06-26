class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n=word.size();
        vector<int> div(n);
        long long num =0;

        for(int i=0; i<n;i++){
            num=(num*10+(word[i]-'0'))%m;
            div[i]=(num==0) ? 1 : 0;
        }
        return div;
    }
};