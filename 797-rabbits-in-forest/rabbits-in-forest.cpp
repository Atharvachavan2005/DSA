class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> count;
        for (int ans : answers) {
            count[ans]++;
        }

        int res = 0;
        for (auto [x, freq] : count) {
            int groupSize = x + 1;
            int groups = (freq + groupSize - 1) / groupSize; // ceil(freq / groupSize)
            res += groups * groupSize;
        }
        return res;
    }
};
