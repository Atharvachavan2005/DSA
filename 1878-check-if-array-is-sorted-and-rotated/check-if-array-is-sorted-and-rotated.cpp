class Solution {
public:
    bool check(vector<int>& nums) {
        int break_count= 0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                break_count++;
            }
        }
        return break_count<=1;
    }
};