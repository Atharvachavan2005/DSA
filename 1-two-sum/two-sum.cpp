class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> dump;
        for(int i =0;i<n;i++){
            int diff = target - nums[i];
            if(dump.find(diff) != dump.end()){
                return {dump[diff],i};
            }
            dump.insert({nums[i],i});
        }
        return {};
    }
};