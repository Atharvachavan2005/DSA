class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        vector<int> Count(26,0);
        for(int i =0;i<s.length();i++){
            Count[s[i]-'a']++;
            Count[t[i]-'a']--;
        }
        for(int val: Count){
            if(val != 0){
                return false;
            }
        }
        return true;
    }
};