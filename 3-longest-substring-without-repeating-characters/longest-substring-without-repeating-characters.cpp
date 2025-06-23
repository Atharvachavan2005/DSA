class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        if(str.size()==0)
         return 0;
        int maxans = 0;
        for(int i = 0;i<str.length(); i++){
            unordered_set < int > set;
            for(int j=i;j<str.length();j++){
                if(set.find(str[j]) != set.end()){
                    maxans = max(maxans, j-i);
                    break;
                }
                set.insert(str[j]);
            }
            maxans = max(maxans, (int)set.size());

        }
        return maxans;
    }
};